// basic_struct.c
// 구조체 선언과 사용의 기본
// 구조체 간략 설명 => 다양한 자료형으로 이루어진 데이터를 하나의 단위로 묶는 사용자 정의 자료형
// 구조체는 struct 키워드를 사용하여 선언

#include <stdio.h>

// 구조체 선언
struct Person {
  char name[20];
  int age;
  float height;
};

int main() {
  // 구조체 변수 선언 및 초기화
  struct Person p1 = {"김동규", 27, 180.8};

  printf("이름: %s\n", p1.name);
  printf("나이: %d세\n", p1.age);
  printf("키: %.1fcm\n", p1.height);

  return 0;
  // 출력결과 : 이름: 김동규
  //           나이: 27세
  //           키: 180.8cm
}