#include <stdio.h>
int main() {
	int n, sum=0;
	printf("n : ");
	scanf_s("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("1~%d까지의 합은 %d 입니다.", n, sum);
}