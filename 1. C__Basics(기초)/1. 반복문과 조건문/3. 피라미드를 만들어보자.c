#include <stdio.h>
int main() {
	int n;
	printf("n : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = (i+1); j < n; j++)
			printf(" ");
		for (int j = 0;j < i * 2 + 1;j++)
			printf("*");
		printf("\n");
	}
}