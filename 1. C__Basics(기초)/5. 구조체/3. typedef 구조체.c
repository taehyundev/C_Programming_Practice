#include <stdio.h>
#include <string.h>
#define MAX 3
#define NAME_MAX 10
typedef struct person {
	int age;
	char name[NAME_MAX];
}person;

int main() {
	person p[MAX];
	
	for (int i = 0; i < MAX; i++) {
		printf("age >> ");
		scanf_s("%d", &p[i].age);
		printf("name >> ");
		scanf_s("%s", p[i].name, NAME_MAX);
	}
	printf("\n\n");
	for (int i = 0; i < MAX; i++) {
		printf("%d\n", i + 1);
		printf("age >> %d ",p[i].age);
		printf("name >> %s\n",p[i].name);
	}
}