// input_output.c
// 입출력 함수 & 연산자

#include <stdio.h>

// %d 정수
// %c 문자 1개
// %s 문자열 (주소값을 받아 null문자를 만날때까지 출력)
int main() {
  int sum;
  printf("input : ");
  scanf("%d", &sum);
  printf("output : %d\n", sum);

  return 0;
}

int main2() {
  int number = 42;
  float pi = 3.141592;
  char letter = 'g';

  printf("Integer: %d\n", number);
  printf("Float: %.2f\n", pi);
  printf("Character: %c\n", letter);

  return 0;
}

int main3() {
  char a;
  a = 'A' + 1;
  printf("%c, %d", a, a); // A = 65(아스키코드)  --> %c == B / %d == 66

  return 0;
}

int main4() {
  int a = 5, b = 9;
  printf("%d, ", ++a);
  printf("%d, ", a++);
  printf("%d, ", --b);
  printf("%d\n", b--);

  return 0;
}

int main5() {
  int a = 5, b = 5;
  a *= 3 + b++; // 3 + 5 후 b 변수 값 1 증가 후 a값은 a * 8;
  printf("%d, %d", a, b);

  return 0;
}

int main6() {
  int a = 10, b = 20;
  int sum = 0;

  sum = ++a + b++;  // a값 11 변경 먼저, b값 20으로 계산 먼저
  printf("%d, ", sum);

  sum = a-- + --b;  // a값 11로 계산 먼저, b값 20으로 변경 먼저
  printf("%d", sum);

  return 0;
}

int main7() {
  int a = 3, b = 4, c = 2;
  int r1, r2;

  r1 = b <= 4 || c == 2;
  r2 = (a > 0) && (b < 5);
  
  printf("%d", r1+r2);

  return 0;
}