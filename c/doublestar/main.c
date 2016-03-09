//
//  main.c
//  doublestar
//
//  Created by Mark Osborne on 5/11/2015.
//  Copyright © 2015 Allballsin Pty Ltd. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node * next;
    int value;
} node;



typedef int (* remove_fn)(node const * v);


 int removeOdds(node const * thisNode) {
     // is this a copy?
    if (thisNode->value % 2 == 1) {
        return 1;
    } else return 0;
}


void remove_if2( node ** head, remove_fn rm)
{
    for (node** curr = head; *curr; )
    {
        node * entry = *curr;
        *curr = entry->next;
        if (rm(entry))
        {
            free(entry);
        }
    }
}

void remove_if( node ** head, remove_fn rm)
{
    for (node** curr = head; *curr; )
    {
        node * entry = *curr;
        if (rm(entry))
        {
            *curr = entry->next;
            free(entry);
        }
        else // why need this?
            curr = &entry->next;
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    node * curr;
    node * head;
    head = NULL;
    
    for (int t=1;t<11;t++) {
        curr = (node *)malloc(sizeof(node));
        curr->value = t;
        curr->next = head;
        head = curr;
    }
    
    remove_if(&head, &removeOdds);
    
    curr = head;
    do {
        printf("%d\n",curr->value);
        curr = curr->next;
    }
    while (curr->next);
        
    
    return 0;
}

