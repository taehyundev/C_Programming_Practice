#include <stdio.h>
int main() {
	int n;
	int isPrime;
	int cnt =0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		isPrime = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0){
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {
			printf("%d\n", i);
			cnt++;
		}

	}
}