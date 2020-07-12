#include <stdio.h>
int main() {
	int n = 10;
	int* ptr = &n;
	printf("ptr Address : %d\n", ptr);
	printf("ptr Variable : %d", *ptr);
}