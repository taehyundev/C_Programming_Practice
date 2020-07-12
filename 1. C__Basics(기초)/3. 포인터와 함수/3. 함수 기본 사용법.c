#include <stdio.h>
void func1(){
	printf("func1()\n");
}
void func2() {
	printf("func2()\n");
	func1();
}
void func3() {
	printf("func3()\n");
	func2();
}

int main() {
	printf("main()\n");
	func3();
}