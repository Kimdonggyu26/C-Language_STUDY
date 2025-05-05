// basic_pointer.c
// 포인터의 개념
// 포인터 변수 --> 변수의 메모리 주소를 저장하는 변수
// 포인터 변수 선언 - 자료형 뒤에 * ex) int* ptr;

#include <stdio.h>

int main() {
  int a = 10;

  int* ptr = &a;  // 변수 a의 주소를 ptr에 저장
  return 0;
}

int main2() {
  int a = 10;
  int* ptr = &a;
  *ptr = 20; // 포인터를 통해 a의 값을 20으로 변경
  printf("%d\n", a);

  return 0;
  // 출력결과 : 20;
}

int main3() {
  int num = 10;
  int* ptr = &num;  // num의 주소를 포인터 ptr에 저장

  printf("num의 값: %d\n", num);
  printf("ptr이 가리키는 값: %d\n", *ptr); // 역참조
  printf("num의 주소: %p\n", &num);
  printf("ptr의 값(저장된 주소): %p\n", ptr);
  printf("ptr의 주소 자체: %p\n", &ptr);

  return 0;
  // 출력결과 : num의 값: 10
  //           ptr이 가리키는 값: 10
  //           num의 주소: (실제주소값)
  //           ptr의 값(저장된 주소): (실제주소값)
  //           ptr의 주소 자체: (실제주소값)
}

int main5() { // 포인터 배열

}