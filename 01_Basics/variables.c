// variables.c
// 변수 선언과 초기화 예제

#include <stdio.h>

int main() {
    int a = 20;
    float b = 3.14;
    char c = 'G';

    printf("a = %d, b = %.2f, c = %c\n", a, b, c);
    return 0;
}


int a = 10;

void func(){
  int a = 30;
  printf("a : %d", a);  // func()의 지역변수 a(30) 출력
}