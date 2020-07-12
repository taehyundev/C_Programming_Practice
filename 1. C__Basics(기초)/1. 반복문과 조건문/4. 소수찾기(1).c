#include <stdio.h>
int main() {
	int n;
	int isPrime = 0;
	scanf_s("%d", &n);
	for (int i = 2; i < n; i++) {
		if (n % i == 0) isPrime = 1;
	}
	
	if (isPrime == 1)
		printf("Not Prime");
	else
		printf("Prime!");
}