/* manybook.c -- 包含多本书的图书目录 */
#include <stdio.h>
#include <string.h>
char *s_gets(char *st, int n);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100 /* 书籍的最大数量 */

struct book { /* 建立 book 模版 */
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main(void) {
  struct book library[MAXBKS]; /* book 类型结构的数组 */
  int count = 0;
  int index;

  printf("Please enter the book title.\n");
  printf("Please [enter] at the start of a line to stop.\n");
  while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL &&
         library[count].title[0] != '\0') {
    printf("Now enter the author.\n");
    s_gets(library[count].author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &library[count++].value);
    while (getchar() != '\n')
      continue; /* 清理输入行 */
    if (count < MAXBKS)
      printf("Enter the next title.\n");
  }

  if (count > 0) {
    printf("Here is the list of your books:\n");
    for (index = 0; index < count; index++)
      printf("%s by %s: $%.2f\n", library[index].title, library[index].author,
             library[index].value);
  } else
    printf("No books? Too bad.\n");

  return 0;
}

char *s_gets(char *st, int n) {
  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);
  if (ret_val) {
    find = strchr(st, '\n'); /* 查找换行符 */
    if (find)                /* 如果地址不是 NULL， */
      *find = '\0';          /* 在此处放置一个空字符 */
    else
      while (getchar() != '\n')
        continue; /* 处理输入行中剩余的字符 */
  }
  return ret_val;
}

/*
>>> Execution Result:
Please enter the book title.
Please [enter] at the start of a line to stop.
My Life as a Budgie
Now enter the author.
Mack Zackles
Now enter the value.
12.95
Enter the next title.
C Primer Plus
Now enter the author.
Stephen Prata
Now enter the value.
108
Enter the next title.

Here is the list of your books:
My Life as a Budgie by Mack Zackles: $12.95
C Primer Plus by Stephen Prata: $108.00
 */
