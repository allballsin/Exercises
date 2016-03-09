//
//  main.c
//  ispalindrome
//
//  Created by Mark Osborne on 9/11/2015.
//  Copyright © 2015 Allballsin Pty Ltd. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* It returns 1 when number is palindrome, otherwise returns 0. */
// 123, 3, 12 32, 1, 321
int isPalindrome(unsigned int number) {
    int reversed = 0;
    int copy = number;
    
    while(number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    
    return (reversed == copy) ? 1 : 0;
}

int isPalindromeOld(int num) {
    int size = 0;
    int numcpy = num;
    while (numcpy>0) {
        numcpy = numcpy / 10;
        size++;
    }
    int result;
    if (size==0) {
        result=0;
    } else result = 1;

    char * str = (char *)malloc(size);
    sprintf(str,"%d",num);
    for (int c=0;c<strlen(str)/2;c++) {
        if (str[c] != str[size-c-1]) {
            result = 0;
            break;
        }
    }
    
    return result;
}

int testIsPalindrome(int input, int expected) {
    int result = isPalindrome(input);
    printf("Input:%d Expected:%d Result:%d\n",input,expected,result);
    if (result==expected)  return 1; else return 0;
}

void doTests () {
    int pass = 1;
    pass = pass && testIsPalindrome(1,1);  // single digit
    pass = pass && testIsPalindrome(122,0); // odd length no
    pass = pass && testIsPalindrome(131,1); // odd length yes
    pass = pass && testIsPalindrome(134431,1);
    pass = pass && testIsPalindrome(134531,0);
    pass = pass && testIsPalindrome(123456,0);
    if (pass==1) {
        printf("All tests passed\n");
    } else printf("One test failed.\n");
}

int main(int argc, const char * argv[]) {
    // insert code here...
    doTests();
    return 0;
}
