/* films1.c -- 使用一个结构数组 */
#include <stdio.h>
#include <string.h>
#define TSIZE 45 // 存储片名的数组大小
#define FMAX 5   // 影片的最大数量

struct film {
  char title[TSIZE];
  int rating;
};

char *s_gets(char *st, int n);

int main(void) {
  struct film movies[FMAX];
  int i = 0;
  int j;

  puts("Enter first movie title:");
  while (i < FMAX && s_gets(movies[i].title, TSIZE) != NULL &&
         movies[i].title[0] != '\0') {
    puts("Enter your rating <0-10>:");
    scanf("%d", &movies[i++].rating);
    while (getchar() != '\n')
      continue;
    puts("Enter next movie title (empty line to stop):");
  }

  if (i == 0)
    printf("No data entered. ");
  else
    printf("Here is the movie list:\n");
  for (j = 0; j < i; j++)
    printf("Movie: %s Rating: %d\n", movies[j].title, movies[j].rating);
  printf("Bye!\n");

  return 0;
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

/*
>>> Execution Result:
Enter first movie title:
Spirited Away
Enter your rating <0-10>:
9
Enter next movie title (empty line to stop):
Devil Dog: The Mound of Hound
Enter your rating <0-10>:
1
Enter next movie title (empty line to stop):
绿皮书
Enter your rating <0-10>:
10
Enter next movie title (empty line to stop):
银河补习班
Enter your rating <0-10>:
9
Enter next movie title (empty line to stop):
速度与激情7
Enter your rating <0-10>:
8
Enter next movie title (empty line to stop):
Here is the movie list:
Movie: Spirited Away Rating: 9
Movie: Devil Dog: The Mound of Hound Rating: 1
Movie: 绿皮书 Rating: 10
Movie: 银河补习班 Rating: 9
Movie: 速度与激情7 Rating: 8
Bye!
 */
