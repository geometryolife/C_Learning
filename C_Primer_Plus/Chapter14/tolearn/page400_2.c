/* C11，使用嵌套的匿名成员结构 */
#include <stdio.h>

struct person {
  int id;
  struct { // 匿名结构
    char first[20];
    char last[20];
  };
};

int main(void) {
  struct person ted = {8483, {"Ted", "Grass"}};

  puts(ted.first);
  printf("No.: %d, Name: %s, %s\n", ted.id, ted.first, ted.last);

  return 0;
}

/*
>>> Execution Result:
Ted
No.: 8483, Name: Ted, Grass
 */
