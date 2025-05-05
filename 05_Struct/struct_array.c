// struct_array.c
// 구조체 배열

#include <stdio.h>

struct Student {
  char name[20];
  int score;
};

int main() {
  struct Student students[3] = {
      {"철수", 85},
      {"영희", 92},
      {"민수", 78}
  };

  
  for (int i = 0; i < 3; i++) {
      printf("이름: %s, 점수: %d\n", students[i].name, students[i].score);
  }

  return 0;
  // 출력결과 : 이름: 철수, 점수: 85
  //           이름: 영희, 점수: 92
  //           이름: 민수, 점수: 78
}