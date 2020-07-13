#include <stdio.h>
#include <string.h>
struct person {
	int age;
	char* name;
};

int main() {
	struct person p;
	p.age = 20;
	p.name = "kangtaehyun";
	printf("Age : %d\n", p.age);
	printf("Name : %s", p.name);
}