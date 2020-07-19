#include <stdio.h>
void swap(int * n, int * m) {
	int temp = *n;
	*n = *m;
	*m = temp;
}
int main() {
	int n = 3, m = 8;
	swap(&n, &m);
	printf("n = %d, m = %d\n", n, m);
}