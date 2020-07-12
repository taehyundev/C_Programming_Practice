#include <stdio.h>
int main() {
	int n[10] = { 3,1,2,5,7,9,12,33,2,101 };
	int maxValue = n[0];
	int minValue = n[0];
	int maxPosition = 0;
	int minPosition = 0;
	for (int i = 1; i < 10; i++) {
		if (maxValue < n[i]) {
			maxValue = n[i];
			maxPosition = i;
		}
		if (minValue > n[i]) {
			minValue = n[i];
			minPosition = i;
		}
	}
	printf("max 값은 %d이고, position은 %d 입니다.\n", maxValue, maxPosition);
	printf("min 값은 %d이고, position은 %d 입니다.", minValue, minPosition);
}