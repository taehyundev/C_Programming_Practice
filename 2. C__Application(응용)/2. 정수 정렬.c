#include <stdio.h>
void sort(int * n, const int MAX) {
	for (int i = 0; i < MAX; i++) {
		for (int j = 1; j < MAX; j++) {
			if (n[j - 1] > n[j]) {
				int temp = n[j - 1];
				n[j - 1] = n[j];
				n[j] = temp;
			}
			
		}
	}
}
void print(int *n,const int MAX) {
	printf("Array 값\n");
	for (int i = 0; i < MAX; i++) {
		printf("%d ", n[i]);
	}
	printf("\n");
}
int main() {
	int arr[10] = { 1,3,5,7,6,9,8,13,0,17 };
	print(arr, 10);
	sort(arr, 10);
	print(arr, 10);
}