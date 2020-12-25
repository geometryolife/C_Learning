/* enum.c -- 使用枚举类型的值
枚举类型的目的是为了提高程序的可读性和可维护性。
该示例使用默认值的方案，把red的值设置为0，使之成为指向
字符串"red"的指针索引 */
#include <stdbool.h> // C99 特性
#include <stdio.h>
#include <string.h> // 提供 strcmp()、strchr()函数的原型

char *s_gets(char *st, int n);

enum spectrum { red, orange, yellow, green, blue, violet };
const char *colors[] = {"red", "orange", "yellow", "green", "blue", "violet"};
#define LEN 30

int main(void) {
  char choice[LEN];
  enum spectrum color;
  bool color_is_found = false;

  puts("Enter a color (empty line to quit):");
  while (s_gets(choice, LEN) != NULL && choice[0] != '\0') {
    for (color = red; color <= violet; color++) {
      if (strcmp(choice, colors[color]) == 0) {
        color_is_found = true;
        break;
      }
    }
    if (color_is_found)
      switch (color) {
      case red:
        puts("Roses are red.");
        break;
      case orange:
        puts("Poppies are orange.");
        break;
      case yellow:
        puts("Sunflowers are yellow.");
        break;
      case green:
        puts("Grass is green.");
        break;
      case blue:
        puts("Bluebells are blue.");
        break;
      case violet:
        puts("Violets are violet.");
        break;
      }
    else
      printf("I don't know about the color %s.\n", choice);
    color_is_found = false;
    puts("Next color, please (empty line to quit):");
  }
  puts("Goodbye!");

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
Enter a color (empty line to quit):
blue
Bluebells are blue.
Next color, please (empty line to quit):
orange
Poppies are orange.
Next color, please (empty line to quit):
purple
I don't know about the color purple.
Next color, please (empty line to quit):

Goodbye!
 */
