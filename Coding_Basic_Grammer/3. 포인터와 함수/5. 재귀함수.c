#include <stdio.h>
int recursive(int n) {
	printf("%d\n", n);
	n++;
	if (n == 10) { return 0; }
	recursive(n);
}
int main() {
	recursive(0);
	
	return 0;
}