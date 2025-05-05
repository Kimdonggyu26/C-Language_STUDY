// pointer_and_array.c
// 포인터와 배열

#include <stdio.h>

int main() {
  int a = 10, b = 20, c = 30;
  int* arr[3] = {&a, &b, &c};

  printf("%d\n", *arr[0]); // 배열의 첫 번째 요소가 가리키는 값을 출력
  
  for(int i = 0; i < 3; i++) {
    printf("%d ", *arr[i]);
  }
  return 0;
  // 출력결과 : 10
  //           10 20 30
}

int main2() {
  int arr[5] = {10, 20, 30, 40, 50};
  int* ptr = arr;  // 배열 이름은 배열의 첫 번째 요소의 주소

  printf("arr[0]: %d\n", arr[0]);
  printf("*ptr: %d\n", *ptr);             // arr[0]과 같음
  printf("*(arr + 1): %d\n", *(arr + 1)); // arr[1]과 같음
  printf("*(ptr + 2): %d\n", *(ptr + 2)); // arr[2]과 같음

  // 포인터를 이용한 배열 순회
  for (int i = 0; i < 5; i++) {
      printf("ptr[%d] = %d, *(ptr + %d) = %d\n", i, ptr[i], i, *(ptr + i));
  }

  return 0;
  // 출력결과 : arr[0]: 10
  //          *ptr: 10
  //          *(arr + 1): 20
  //          *(ptr + 2): 30
  //          ptr[0] = 10, *(ptr + 0) = 10
  //          ptr[1] = 20, *(ptr + 1) = 20
  //          ptr[2] = 30, *(ptr + 2) = 30
  //          ptr[3] = 40, *(ptr + 3) = 40
  //          ptr[4] = 50, *(ptr + 4) = 50
}

int main3() {
  int arr[5];
  int* ptr = arr;

  printf("정수 5개를 입력하세요:\n"); // 10, 20, 30, 40, 50 입력
  for (int i = 0; i < 5; i++) {
      scanf("%d", ptr + i);  // 또는 &arr[i]
  }

  printf("입력한 값 출력:\n");
  for (int i = 0; i < 5; i++) {
      printf("arr[%d] = %d\n", i, *(ptr + i));
  }

  return 0;
  // 출력결과 : 정수 5개를 입력하세요:
  //           10 20 30 40 50
  //           입력한 값 출력:
  //           arr[0] = 10
  //           arr[1] = 20
  //           arr[2] = 30
  //           arr[3] = 40
  //           arr[4] = 50
}