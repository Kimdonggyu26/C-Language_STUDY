// pointer_function.c
// 포인터를 함수에 전달

void updateValue(int* ptr) {
  *ptr = *ptr + 10;
}

int main() {
  int num = 5;

  printf("함수 호출 전: num = %d\n", num);
  updateValue(&num);  // 주소를 넘김
  printf("함수 호출 후: num = %d\n", num);

  return 0;
  // 실행결과 : 함수 호출 전: num = 5
  //           함수 호출 후: num = 15
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main2() {
    int x = 10, y = 20;

    printf("바꾸기 전: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // 주소 전달
    printf("바꾼 후 : x = %d, y = %d\n", x, y);

    return 0;
    // 출력결과 : 바꾸기 전: x = 10, y = 20
    //           바꾼 후 : x = 20, y = 10
}