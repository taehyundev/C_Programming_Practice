#include <stdio.h>
int main() {
	char m[100];
	scanf_s("%s", m, sizeof(m));
	printf("%s", m);
}