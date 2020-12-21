/* 嵌套结构 */
#include <stdio.h>

struct names {
  char first[20];
  char last[20];
};

struct person {
  int id;
  struct names name; // 嵌套结构成员
};

int main(void) {
  struct person ted = {8483, {"Ted", "Grass"}};

  puts(ted.name.first);
  printf("No.: %d, Name: %s, %s\n", ted.id, ted.name.first, ted.name.last);

  return 0;
}

/*
>>> Execution Result:
Ted
No.: 8483, Name: Ted, Grass
 */
