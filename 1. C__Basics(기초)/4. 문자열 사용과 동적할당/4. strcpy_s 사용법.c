#include <stdio.h>
#include <string.h>
int main() {
	char name[13] = "Hello, World";
	char dest[13];
	//src > dest
	strcpy_s(dest, 13, name);
	printf("%s", dest);
}