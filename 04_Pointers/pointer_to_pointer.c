// pointer_to_pointer.c
// 이중 포인터

#include <stdio.h>

int main() { // 이중 포인터
  int a = 10;         // 일반 변수
  int* ptr = &a;      // a를 가리키는 포인터
  int** dptr = &ptr;  // ptr을 가리키는 이중 포인터

  ptintf("%d ", a);
  printf("%d ", *ptr);
  printf("%d ", **dptr);

  return 0;
  // 출력결과 : 10 10 10
}

  int main2() {
  int num = 42;
  int* ptr = &num;
  int** dptr = &ptr;  // 이중 포인터

  printf("num: %d\n", num);
  printf("*ptr: %d\n", *ptr);
  printf("**dptr: %d\n", **dptr);  // 이중 포인터로 접근

  return 0;
  // 출력결과 : num: 42
  // *ptr: 42
  // **dptr: 42
}