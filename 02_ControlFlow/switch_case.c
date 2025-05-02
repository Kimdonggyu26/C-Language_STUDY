// switch_case.c
// 조건문(switch)
// 조건 값에 맞는 case로 이동 -> break를 만날 때까지 수행한다.

#include <stdio.h>

int main() {
  char ch = 'A';

  switch(ch) {
    case 'A' : // 변수 ch는 A를 값으로 가지고 있기 때문에 case 'A'부터 수행
      pirntf("ch의 값은 A");
      break;   // break;를 만났기 때문에 switch문 종료
    case 'B' :
      printf("ch의 값은 B");
      break;
    case 'C' :
      printf("ch의 값은 C");
      break;
    default :
      printf("ch의 값은 A, B, C가 아닌 다른 문자입니다.");
  }

  return 0;
  // 출력 결과 : ch의 값은 A
}

int main2() {
  int a = 17;

  switch(a % 3) {
    case 0: printf("A");
    case 1: printf("B");
    case 2: printf("C"); // case 2부터 실행 (break를 만날때까지)
    case 3: printf("D");
    default: printf("E"); // case 2부터 break를 만나지않았기때문에 default까지 실행
  }
  return 0;
  // 출력결과 : CDE 
}

int main3() {
  int a = 27;

  switch(a % 6) { // a % 6의 값은 3이지만 case 3이 없기때문에 default를 수행함
    case 0: printf("A"); break;
    case 1: printf("B");
    case 2: printf("C");
    default: pritnf("D");
  }
  return 0;
  // 출력결과 : D
}