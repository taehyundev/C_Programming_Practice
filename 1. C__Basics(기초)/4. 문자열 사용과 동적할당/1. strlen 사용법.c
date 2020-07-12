#include <stdio.h>
#include <string.h>
int main() {
	char* name = "Kang tae Hyun";
	int nameLength = strlen(name);
	printf("%d\n\n", nameLength);
	for (int i = 0; i < nameLength; i++) {
		printf("%c\n", name[i]);
	}
}