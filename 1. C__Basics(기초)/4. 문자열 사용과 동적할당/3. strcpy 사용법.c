#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char name[13] = "Hello, World";
	char dest[13];
	//src > dest
	strcpy(dest,name);
	printf("%s", dest);
}