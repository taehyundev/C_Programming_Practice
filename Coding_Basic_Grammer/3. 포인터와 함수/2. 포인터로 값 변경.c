#include <stdio.h>
int main() {
	int n = 10;
	int* ptr = &n;
	*ptr = 3;
	printf("%d\n%d",n, *ptr);
}