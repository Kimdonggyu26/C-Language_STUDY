// recursion.c
// 자기 자신을 호출하는 재귀 함수

// * 재귀 함수에서 중요한 것
//    1) 반드시 종료 조건이 있어야 한다. => 없으면 무한 재귀가 발생 -> Stack Overflow 발생
//    2) 반복보단 간결하지만, 성능은 반복문보다 느릴 수 있음

#include <stdio.h>

// 1. 팩토리얼 함수
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;                     // 종료 조건(필수)
    else
        return n * factorial(n - 1);  // 자기 자신을 호출
}

// 2. 피보나치 수열 예제
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num = 5;

    printf("factorial(%d) = %d\n", num, factorial(num));
    printf("fibonacci(%d) = %d\n", num, fibonacci(num));

    return 0;
    // 실행결과 : factorial(5) = 120
    //           fibonacci(5) = 5
}