// continue.c
// 반복문(continue)
// 반복문의 나머지 코드를 건너뛰고 바로 다음 반복으로 이동하도록 유도

#include <stdio.h>

int main() {
  for(int i = 1; i <= 5; i++) {
    if(i == 3) {
      continue; // i가 3일 때 아래 코드를 건너 뜀
    }
    printf("%d ", i);
  }
  return 0;
  // 실행결과 : 1 2 4 5
}

int main2() {
  int i = 0;

  while (i < 10) {
    i++;
    if (i % 2 != 0) {
      continue; // 홀수일 경우 아래 코드를 건너 뜀
    }
    printf("%d ", i);
  }
  return 0;
  // 실행결과 : 2 4 6 8 10
}
