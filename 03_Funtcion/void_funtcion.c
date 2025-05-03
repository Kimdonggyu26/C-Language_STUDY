// void_function.c
// 리턴값이 없는 void 함수

#include <stdio.h>

// 인삿말 출력
void greetUser() {
    printf("안녕하세요 김동규입니다.\n");
}

// 두 수를 더해서 결과 출력 (반환은 하지 않음) --> 즉, 함수를 호출한 곳으로 값이 넘어가지 않고 출력 후 종료
void printSum(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

// 정수 배열의 모든 요소 출력
void printArray(int arr[], int size) {
    printf("배열 요소: ");
    for (int i = 0; i < size; i++) { // arr배열의 인덱스를 순차적으로 출력하는 반복문
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    greetUser();

    printSum(5, 8);

    int nums[] = {1, 2, 3, 4, 5};
    printArray(nums, 5);

    return 0;
    // 실행결과 : 안녕하세요 김동규입니다.
    //           5 + 8 = 13
    //           배열 요소: 1 2 3 4 5
}