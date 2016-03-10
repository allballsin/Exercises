#include <stdio.h>
#include <stdlib.h>

char* allocateMemory() {
    char str[20] = "Hello world.";
    return str;
}


char * allocateMemory2() {
	char* p = malloc(sizeof(char)*20);
	p = "Hello workld.";
	return p;
}
void test() {
    char* pString = allocateMemory2();
    printf("pString is %s.\n", pString);
    
}

int main(void) {
	test();

}