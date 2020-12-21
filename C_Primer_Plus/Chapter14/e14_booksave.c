/* booksave.c -- 在文件中保存结构中的内容 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10 /* 最大书籍数量 */

char *s_gets(char *st, int n);

struct book { /* 建立 book 模版 */
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main(void) {
  struct book library[MAXBKS]; /* 结构数组 */
  int count = 0;
  int index, filecount;
  FILE *pbooks;
  int size = sizeof(struct book);

  if ((pbooks = fopen("book.dat", "a+b")) == NULL) {
    fputs("Can't open book.dat file\n", stderr);
    exit(1);
  }

  rewind(pbooks); /* 定位到文件开始 */
  while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1) {
    if (count == 0)
      puts("Current contents of book.dat:");
    printf("%s by %s: $%.2f\n", library[count].title, library[count].author,
           library[count].value);
    count++;
  }
  filecount = count;
  if (count == MAXBKS) {
    fputs("The book.dat file is full.\n", stderr);
    exit(2);
  }

  puts("Please add new book titles.");
  puts("Press [enter] at the start of a line to stop.");
  while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL &&
         library[count].title[0] != '\0') {
    puts("Now enter the author.");
    s_gets(library[count].author, MAXAUTL);
    puts("Now enter the value.");
    scanf("%f", &library[count++].value);
    while (getchar() != '\n')
      continue; /* 清理输入行 */
    if (count < MAXBKS)
      puts("Enter the next title.");
  }

  if (count > 0) {
    puts("Here is the list of your books:");
    for (index = 0; index < count; index++)
      printf("%s by %s: $%.2f\n", library[index].title, library[index].author,
             library[index].value);
    fwrite(&library[filecount], size, count - filecount, pbooks);
  } else
    puts("No books? Too bad.\n");

  puts("Bye.\n");
  fclose(pbooks);

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
Please add new book titles.
Press [enter] at the start of a line to stop.
Metric Merriment
Now enter the author.
Polly Poetica
Now enter the value.
18.99
Enter the next title.
Deadly Farce
Now enter the author.
Dudley Forse
Now enter the value.
15.99
Enter the next title.

Here is the list of your books:
Metric Merriment by Polly Poetica: $18.99
Deadly Farce by Dudley Forse: $15.99
Bye.
========== 第二次运行 ==========
Current contents of book.dat:
Metric Merriment by Polly Poetica: $18.99
Deadly Farce by Dudley Forse: $15.99
Please add new book titles.
Press [enter] at the start of a line to stop.
The Third Jar
Now enter the author.
Nellie Nostrum
Now enter the value.
22.99
Enter the next title.

Here is the list of your books:
Metric Merriment by Polly Poetica: $18.99
Deadly Farce by Dudley Forse: $15.99
The Third Jar by Nellie Nostrum: $22.99
Bye.
 */
