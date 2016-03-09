//
//  main.c
//  macrotests
//
//  Created by Mark Osborne on 9/11/2015.
//  Copyright © 2015 Allballsin Pty Ltd. All rights reserved.
//

#include <stdio.h>

#define SQUARE(x) ((x)*(x))


void test() {
    int x = 5;
    int y = SQUARE(x++);
    printf("Expected: %d\n",6*7);
    printf("Output %d.\n", y);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    test();
    return 0;
}
