#include <stdio.h>
#include <Windows.h>
#define MAX 10
//전역변수
int top = 0;
int arr[10];// 10개짜리 공간 정적배열
// arr[1] = data?
// arr[0] = data?

//push 구현 값을 arr에 넣는다.
int push(int data) {

   if (top >= MAX) {
      return 0; // 0 -1 부정
   }
   else {
      arr[top] = data;
      top++; //top이 1개 증가
      return 1; // 너는 되는놈이다.
   }
}
//pop 구현 값을 arr에 맨 위에 값을 뺀다. (top) 
// pop 함수에서 값을 arr에서 뺀다음에 맨위에있던 data를 main으로 넘겨줘요
int pop() {
   int n = arr[top - 1];
   top--;//top 1칸 감소
   return n;//n리턴
}
void list() {
   for (int i = 0; i < top; i++) {
      printf("[ %d ] 번째의 값 : %d\n", i + 1, arr[i]);
   }
}
//프로그램 시작점

//system("pause");
//system("cls");

//system함수
int main() {
   // 1. push 2.pop 3. list 4. exit
   int sw;
   int n;
   while (1) {
      printf("1.push 2.pop 3.list 4.exit >>");
      scanf_s("%d", &sw);
      switch (sw)
      {
      case 1:
         printf("input 값을 적어주세요 >> ");
         scanf_s("%d", &n);
         int m = push(n); // 1 0
         if(m == 0){
            printf("꽉찼습니다.\n");
         }
         system("pause");
         system("cls");
         break;
      case 2:
         if (top != 0)
            printf("%d\n", pop());
         else
            printf("더이상 뺄값이 없다.\n");
         system("pause");
         system("cls");
         break;
      case 3:
         list();
         system("pause");
         system("cls");
         break;
      case 4:
         exit(1);
         system("pause");
         system("cls");
         break;
      }
   }
}