//
//  main.c
//  DoesAssignCopyCharStrings
//
//  Created by Mark Osborne on 5/02/2016.
//  Copyright © 2016 Allballsin Pty Ltd. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    struct person {
        int age;
        char *name;
    };
    
    struct person first;
    struct person* ptr;
    
    first.age = 21;
    char* fullname = "full name";
    // expect first.name to be a copy of the string with different addresses
    first.name = fullname;
    // expect first.name to stay first.name (copy of a pointer)
    // expect address of first.name <> address of fullname although values are the same
    fullname = 0;
    // nope, it's a copy of the pointer
    ptr = &first;
    
    printf("age = %d. name=%s\n", first.age, ptr->name);
    
    return 0;
}
