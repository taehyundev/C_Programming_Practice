#include <stdio.h>
int main() {
	int n[10];
	for (int i = 0; i < 10; i++) {
		printf("[%d 번째] Array 값 : ",i);
		scanf_s("%d", &n[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("[%d 번째] Array 값 출력: %d",i,n[i]);
	}

}