// for_loop.c
// 반복문(for)
// for(초기식; 조건식; 증감식){ 반복 실행할 코드 }

#include <stdio.h>

int main() {
  int i, sum = 0;

  for(i = 0; i < 6; i++) { // i = 6이되면 for문 수행은 안되지만 증감식이 우선이기 때문에 최종 i의 값은 6이 된다.
    sum += i;
  }
  printf("1부터 %d까지의 합 = %d", i-1, sum);
  return 0;
  //출력결과 : 1부터 5까지의 합 = 15
}

int main2() {
  int i = 0;

  for(; i < 5; i++) { // 초기식이 비어있지만 for문 바깥에서 i 값을 초기화 했기 때문에 가능하다.
    printf("%d ", i);
  }
  return 0;
  // 출력결과 : 0 1 2 3 4
}

int main3() {
  int i, sum = 0;

  for(i = 1; i <= 10; i+=2) {
    sum += i;
    printf("%d, ", i);
  }
  printf("%d", sum);
  return 0;
  // 출력결과 : 1, 3, 5, 7, 9, 25
}

int main4() {
  int a, b, c, sum;
  a=b=1;
  sum = a + b;

  for( int i = 3; i < 6; i++) {
    c = a + b;
    sum += c;
    a = b;
    b = c;
  }
  printf("%d", sum);
  return 0;
  // 출력결과 : 12
}

int main5() {
  int i;

  for( i = 2; i < 11; i++) { // 초기 i값은 2 -> else문 수행 -> 다음 i값 3 -> break; 만나서 for문종료
    if( i==3 ) {
      break;
    }
    printf("%d", i);
  }
  return 0;
  // 출력결과 : 2 
}

int main6() {
  for(int i = 0; i < 10 && i % 2 == 0; i += 2){ // 조건식 == 0부터 10보다 작으면서 짝수인 값
    printf("%d ", i);
  }
  return 0;
  // 출력결과 : 0 2 4 6 8
}