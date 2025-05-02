// variables.c
// 변수 선언과 초기화 예제

#include <stdio.h>

int main() {
    int a = 20;
    float b = 3.14;
    char c = 'G';

    printf("a = %d, b = %.2f, c = %c\n", a, b, c);
    return 0;
    // 출력결과 : a = 20, b = 3.14, c = G
}


int a = 10;

void func() {
  int a = 30;
  printf("a : %d", a);  // func()의 지역변수 a(30) 출력
  
  // 출력결과 : a : 30
}

int myInfo() {
  int age = 27;
  float height = 180.7;
  char grade = 'A';
  
  printf("나이: %d세\n", age);
  printf("키: %.1fcm\n", height);
  printf("등급: %c등급\n", grade);

  return 0;

  // 출력결과 : 나이: 27세
  //           키: 180.7cm
  //           등급: A등급
}

int changeNum() {
  int a = 10, b = 20, temp; // a, b 변수 생성과 동시에 초기화 / temp는 변수만 생성해둠

  printf("바꾸기 전: a = %d, b = %d\n", a, b);

  temp = a;
  a = b;
  b = temp;

  printf("바꾼 후: a = %d, b = %d\n", a, b);

  return 0;
  // 출력결과 : 바꾸기 전: a = 10, b = 20
  //           바꾼 후: a = 20, b = 10
}

int checkSize() {
  printf("int: %zu바이트\n", sizeof(int));
  printf("float: %zu바이트\n", sizeof(float));
  printf("double: %zu바이트\n", sizeof(double));
  printf("char: %zu바이트\n", sizeof(char));
  return 0;

  // 출력결과 : int: 4바이트
  //           float: 4바이트
  //           double: 8바이트
  //           char: 1바이트
}