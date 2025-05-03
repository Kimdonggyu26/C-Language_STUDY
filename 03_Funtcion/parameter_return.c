// parameter_return.c
// 매개변수화 반환값이 있는 함수

#include <stdio.h>

// 두 정수의 합을 반환
int add(int a, int b) {
    return a + b;
}

// 두 정수 중 더 큰 값을 반환
int max(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}

// 두 정수의 차를 반환
int absDifference(int a, int b) { 
    if (a > b) // 큰수 - 작은수를 하기위한 조건문
        return a - b;
    else
        return b - a;
}

int main() {
    int x = 10, y = 20;

    printf("add(%d, %d) = %d\n", x, y, add(x, y));
    printf("max(%d, %d) = %d\n", x, y, max(x, y));
    printf("absDifference(%d, %d) = %d\n", x, y, absDifference(x, y));

    return 0;
    // 실행결과 : add(10, 20) = 30
    //           max(10, 20) = 20
    //           absDifference(10, 20) = 10
}



// 리턴값 X, 매개변수 X
void printHello() {
  printf("Hello, C Language!\n");
}

// 리턴값 X, 매개변수 O
void printSum(int a, int b) {
  printf("두 수의 합은 %d입니다.\n", a + b);
}

// 리턴값 O, 매개변수 X
int getFixedValue() {
  return 42;
}

// 리턴값 O, 매개변수 O
int multiply(int x, int y) {
  return x * y;
}

int main() {
  printHello();

  printSum(3, 7);

  int fixed = getFixedValue();
  printf("고정된 리턴값: %d\n", fixed);

  int result = multiply(4, 5);
  printf("곱셈 결과: %d\n", result);

  return 0;
  // 실행결과 : 고정된 리턴값: 42
  //           곱셈 결과: 20
}