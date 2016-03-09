//
//  main.c
//  testquestion
//
//  Created by Mark Osborne on 5/11/2015.
//  Copyright © 2015 Allballsin Pty Ltd. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void allocateMemory2(char** pStr, int length) {
    *pStr = (char*)malloc(length);
}

void allocateMemory(char* pStr, int length) {
    pStr = (char*)malloc(length);
}


void test() {
    char* pString = NULL;
    //char* pString = "Hi";
    allocateMemory(pString, 20);
    strcpy(pString, "Hello world.");
}

int main(void) {
    test();
    
}