#include <stdio.h>
int Add(int n, int m) {
	return n + m;
}
void input(int* n, int* m) {
	scanf_s("%d%d", n, m);
}
int main() {
	int n, m;
	input(&n, &m);
	int result = Add(n, m);
	printf("result : %d", result);
}