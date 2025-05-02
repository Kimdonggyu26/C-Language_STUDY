// if_else.c
// 조건문(if)
// * 비교연산자, 논리연산자는 조건식에 자주 활용되기 때문에 완벽히 숙지하기

#include <stdio.h>

int main() { // 정수값을 입력받아 양수, 음수, 0 판별하기
  int num;

  printf("숫자를 입력하세요: ");
  scanf("%d", &num);

  if (num > 0) {
      printf("양수입니다.\n");
  } else if (num < 0) { // if조건에 부합하지 않은 값들 중
      printf("음수입니다.\n");
  } else { // 그 외 모든값
      printf("0입니다.\n");
  }

  return 0;
  // 출력결과(6입력) : 양수입니다.
}

int main2() { // 정수값을 입력받아 홀수, 짝수 판별하기
  int num;

  printf("정수를 입력하세요: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
      printf("짝수입니다.\n");
  } else {
      printf("홀수입니다.\n");
  }

  return 0;
  // 출력결과(5입력) : 홀수입니다.
}

int main3() {
  int a = 20, b = 30;

  if(a++ <= 20 || ++b > 30) // 좌항이 참값이 나오고 ||연산이기 때문에 우항은 수행하지 않음!!
    b++;  // 실행할 코드가 한 줄이면 {} 없이 작성가능 !!
  
  printf("%d, %d\n", a++, b); // 즉, ++b가 수행되지 않아 출력값은 21, 31

  return 0;
  // 출력결과 : 21, 31
}