#include <stdio.h>
#include <string.h>
int main() {
	char* name = "Kang tae Hyun";
	printf("True : 0   False : 1\n\n");
	int CompareValue = strcmp(name, "1234");
	printf("%d\n", CompareValue);
	CompareValue = strcmp(name, "Kang tae Hyun");
	printf("%d", CompareValue);
}