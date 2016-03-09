#include <stdio.h>

char* allocateMemory() {
    char str[20] = "Hello world.";
    return str;
}

void test() {
    char* pString = allocateMemory();
    printf("pString is %s.\n", pString);
}

int main(void) {
	test();

}