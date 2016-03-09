#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void allocateMemory(char* pString, int length) {
    pString = (char*)malloc(length);
}

void test() {
    char* pString = NULL;
    allocateMemory(pString, 20);
    strcpy(pString, "Hello world.");
}
int main(void) {
	test();

}