//
//  main.c
//  permcomb
//
//  Created by Mark Osborne on 6/11/2015.
//  Copyright © 2015 Allballsin Pty Ltd. All rights reserved.
//

#include <stdio.h>
#include <string.h>


// boundaries: n=0, n=1, n=2, n=10, n<0?

// nCr - n!/r!(n!-r!)
// nPr - n!/(n!-r!)

int factorial(int n) {
    int result = 0;
    
    if (n!=0) {
        result = n;
        for (int i = n; i>1; i--) {
            result = result * i;
        }
    }
    return result;
}

void printme(char * name, int result) {
    printf("%s: %d\n",name,result);
}

void factorialTest() {
    printme("0",factorial(0));
    printme("1",factorial(1));
    printme("10",factorial(10));
    
    
}


int perms(int n, int r) {
    return 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    factorialTest();
    return 0;
}
