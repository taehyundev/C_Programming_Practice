#include <stdio.h>
#define MAX 5
typedef struct Queue {
    //Queue에 필요한 변수의 집합(변수들의 집합을 보통 struct라고 함)
	int* n;
	int size;
	int rear, front;
}queue;
//전역변수 (구조체 변수)
queue q;

int push(int n) {
    if (q.rear >= q.size) {
        return 0;
    }
    else {
        q.n[q.rear] = n;
        q.rear++;
        return 1;
    }

}
int pop(int * n) {
    if (q.front >= q.rear) {
        return 0;
    }
    else {
        *n = q.n[q.front];
        q.front++;
        return 1;
    }
}
void init() {
    q.size = MAX;
    q.n = (int*)malloc(sizeof(int) * q.size);
    q.rear = 0;
    q.front = 0;
}
/*
    > 오늘 나오는 개념
    구조체,typedef 구조체, 함수, 동적할당, 포인터, call by address

    > 오늘 만들 프로그램
    2020 07 18 에 했던 Stack과는 다르게 선입선출 먼저들어간 값이 먼저 나오는 형태의
    프로그램을 구현해 보았다.

    큐같은 경우에는 front와 rear가 있고 front가 앞 rear가 뒤이다.
    push를 할경우 뒤에가 늘어나기떄문에 rear를 ++하여 값을 넣어준다.
    pop을 할 경우에는 front 즉 앞에서 부터 다시 수거해야되기때문에
    front를 ++하여 값을 수거해준다.

    init()함수는 구조체안의 값을 초기화 해주는 역할
    push()는 값을 넣어주는 역할
    pop()은 빼주는 역할
    다만 pop같은 경우에는 main에서 int형 변수의 주소값(&)을 보내오고있다.
    pop함수에서는 그걸 int * 형태로 받고, 이 것을 통해서 return 을 하지않고
    다른 함수에서 변경된 값을 main으로 전달하는 방법을 알아보자(call by address)
   
*/
int main() {
    init();
   
    //push
    for (int i = 0; i < MAX+1; i++) {
        int n;
        printf("input >> ");
        scanf_s("%d", &n);
        int m= push(n);
        if (m == 0)
            printf("큐가 꽉찼습니다.\n");
    }

    printf("\n\n");

    //pop
    for (int i = 0; i < MAX +1; i++) {
        int n;
        int m =pop(&n);
        if (m == 0) {
            printf("큐에 더이상 값이 없습니다.\n");
        }
        else {
            printf("%d 가 pop되었습니다.\n", n);
        }
    }
   
}