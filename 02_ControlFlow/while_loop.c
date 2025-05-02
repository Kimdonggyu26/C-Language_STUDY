// while_loop.c
// 반복문(while)
// while(조건식) { 반복 실행할 코드 }

#include <stdio.h>

int main() {
  int x = 3;

  while(x > 0) {
    printf("%d", x);
    x--;
  }
  return 0;
  // 출력결과 : 321
}

int main2() {
  int x = 1;

  while(x > 0) {
    printf("무한루프");
  }
  return 0;
  // 프로그램이 종료되지않음 (무한루프실행)
}

int main3() {
  int x = 10;
  while (x > 0) {
    if(x == 5){
      printf("중간에 종료");
      break;  // 반복문 강제 종료
    }
    printf("%d ", x);
    x--;
  }
  return 0;
  // 출력결과 : 10 9 8 7 6 중간에 종료
}



// do_while문
// do{ 반복 실행할 코드 } while (조건식)

int main4() {
  int x = 5;

  do {
    pritnf("%d ", x);
    x--;
  } while (x > 0);

  return 0;
  // 출력결과 : 54321
}

// do while문의 특성 !! 조건이 처음부터 거짓일 경우에도 조건과 관계없이 한 번은 실행된다.
int main5() {
  int x = -1;

  do{
    printf("한번은 실행");
  } while(x > 0);

  return 0;
  // 출력결과 : 한번은 실행
}