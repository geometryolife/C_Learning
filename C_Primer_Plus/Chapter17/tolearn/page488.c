/* 使用动态内存分配存放影片的最大数量 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45

struct film {
  char title[TSIZE];
  float rating;
};

char *s_gets(char *st, int n);

int main(void) {
  int n, j;
  int i = 0;
  struct film *movies; // 指向结构的指针

  printf("Enter the maximum of movies you'll enter:\n");
  scanf("%d", &n);
  while (getchar() != '\n')
    continue;
  movies = (struct film *)malloc(n * sizeof(struct film));

  puts("Enter first movie title:");
  while (i < n && s_gets(movies[i].title, TSIZE) != NULL &&
         movies[i].title[0] != '\0') {
    puts("Enter your rating <0-10>:");
    scanf("%f", &movies[i++].rating);
    while (getchar() != '\n')
      continue;
    puts("Enter next movie title (empty line to stop:)");
  }

  if (i == 0)
    printf("No data entered. ");
  else
    printf("Here is the movie list\n");
  for (j = 0; j < i; j++) {
    printf("Movie: %s Rating: %.2f\n", movies[j].title, movies[j].rating);
  }
}

char *s_gets(char *st, int n) {
  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);
  if (ret_val) {
    find = strchr(st, '\n'); /* 查找换行符 */
    if (find)                /* 如果地址不是 NULL */
      *find = '\0';          /* 在此处放置一个空字符 */
    else
      while (getchar() != '\n')
        continue; /* 处理输入行中剩余的字符 */
  }
  return ret_val;
}
