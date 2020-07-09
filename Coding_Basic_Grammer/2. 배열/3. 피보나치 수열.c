#include <stdio.h>
int main() {
	int dp[100] = {0,1};
	int n;
	int result =0;
	printf("n >> ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		dp[i+2] = dp[i] + dp[i + 1];
	}
	printf("%d", dp[n]);
}