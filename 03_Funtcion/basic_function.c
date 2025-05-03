// basic_function.c
// 함수정의 & 호출의 기초

#include <stdio.h>

// 함수 선언 
// * 필수는 아니지만 선언하는 이유 : 함수의 정의가 main함수 아래에 있기 때문.
//                              C언어는 절차적 프로그래밍 언어이기때문에 함수가 정의보다 먼저 호출되는경우 컴파일 에러가 발생한다.
//   즉, 함수 선언을 미리 해두고 이후에 정의 하는 이유는 가독성을 위해 따로 분리하는게 일반적이다.
int add(int a, int b);
int subtract(int a, int b);

int main() {
    int x = 10;
    int y = 5;

    int sum = add(x, y);
    int diff = subtract(x, y);

    printf("덧셈 결과: %d\n", sum);
    printf("뺄셈 결과: %d\n", diff);

    return 0;
    // 출력결과 : sum: 15
    //           diff: 5
}

// 함수 정의
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}