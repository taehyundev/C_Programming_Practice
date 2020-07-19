#include <stdio.h>
#include <string.h>
#include <Windows.h>
typedef struct Student {
	int idx;
	char* name;
	int age;

}student;

int search(student *s, char * name, const int MAX) {
	for (int i = 0; i < MAX; i++) {
		if (strcmp(s[i].name, name) == 0) {
			return i;
		}
	}
	return -1;
}
void allList(student* s, const int MAX) {
	for (int i = 0; i < MAX; i++) {
		printf("< %d 번 정보 >\n", s[i].idx);
		printf("이름 - %s\n", s[i].name);
		printf("나이 - %d\n", s[i].age);
		printf("\n");
	}
}
void userList(student* s, const int MAX, int position) {
	printf("< %d 번 정보 >\n",s[position].idx);
	printf("이름 - %s\n",s[position].name);
	printf("나이 - %d\n", s[position].age);
	printf("\n");
}
int main() {
	student s[3] = {{0,"강태현",20},{1,"이나린",20},{2,"이한주",20} };
	char name[10];
	while (1) {
		printf("1. 이름검색 2. 전체리스트 >>");
		int sw;
		scanf_s("%d", &sw);
		switch (sw)
		{
		case 1:
			printf("이름 >> ");
			scanf_s("%s", name,10);
			int position = search(s,name,3);
			if (position == -1) {
				printf("이름에 대한 정보를 찾을 수 없습니다.\n");
			}
			else {
				userList(s, 3, position);
			}
			system("pause");
			system("cls");
			break;
		case 2:
			allList(s, 3);
			system("pause");
			system("cls");
			break;
		}
	}
}