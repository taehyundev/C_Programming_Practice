#include <stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = (i+1); j < n; j++)
			printf(" ");
		for (int j = 0; j < i * 2 + 1; j++) {
			if (j == 0 || j == i * 2||i==n-1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j <= i; j++)
			printf(" ");
		for (int j = i; j < 2 * n - 3 - i; j++) {
			if (j == i ||j == (2*n-3-i)-1)
				printf("*");
			else
				printf(" ");
		}

		printf("\n");

	}
}