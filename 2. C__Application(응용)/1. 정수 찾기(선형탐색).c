#include <stdio.h>
int find(int * n, int max, int key) {
	for (int i = 0; i < max; i++) {
		if (n[i] == key) return i;
	}
	return -1;
}
int main() {
	int arr[10] = { 1,3,5,7,6,9,8,13,0,17 };
	int k;
	printf("찾고싶은 수를 입력해주세요 >> ");
	scanf_s("%d", &k);
	int position = find(arr, 10, k);
	if (position == -1) {
		printf("수를 찾지 못했습니다.");
	}
	else {
		printf("%d index 위치에 존재합니다.", position);
	}
}