#include <stdio.h>
#include <stdlib.h>
int main() {
	int MAX = 5;
	int* p = (int*)malloc(sizeof(int) * MAX);
	for (int i = 0; i < MAX; i++)
		scanf_s("%d", &p[i]);
	for (int i = 0; i < MAX; i++)
		printf("%d", p[i]);

	free(p);
}