#include <stdio.h>
int main() {
	int n;
	printf(">> ");
	scanf_s("%d", &n);
	
	switch (n) {
	case 1:
		printf("%d 을 출력하였습니다.\n", &n);
		break;
	case 2:
		printf("%d 을 출력하였습니다.\n", &n);
		break;
	case 3:
		printf("%d 을 출력하였습니다.\n", &n);
		break;
	default:
		printf("기타");
	}
}