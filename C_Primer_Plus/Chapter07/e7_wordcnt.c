// wordcnt.c -- 统计字符数、单词数、行数
#include <ctype.h>   // 为isspace()函数提供原型
#include <stdbool.h> // 为bool、true、false提供定义
#include <stdio.h>
#define STOP '|'
int main(void) {
  char c;              // 输入字符
  char prev;           // 读入的前一个字符
  long n_chars = 0L;   // 字符数
  int n_lines = 0;     // 行数
  int n_words = 0;     // 单词数
  int p_lines = 0;     // 不完整的行数
  bool inword = false; // 如果c在单词中，inword等于true

  printf("Enter text to be analyzed (| to terminate):\n");
  prev = '\n'; // 用于识别完整的行
  while ((c = getchar()) != STOP) {
    n_chars++; // 统计字符
    if (c == '\n')
      n_lines++; // 统计行
    if (!isspace(c) && !inword) {
      inword = true; // 开始一个新的单词
      n_words++;     // 统计单词
    }
    if (isspace(c) && inword)
      inword = false; // 达到单词的末尾
    prev = c;         // 保存字符的值
  }

  if (prev != '\n')
    p_lines = 1;
  printf("characters = %ld, words = %d, lines = %d, ", n_chars, n_words,
         n_lines);
  printf("partial lines = %d\n", p_lines);

  return 0;
}

/*
>>> Execution Result:
Enter text to be analyzed (| to terminate):
Reason is a
powerful servant but
an inadequate master.
|
characters = 55, words = 9, lines = 3, partial lines = 0

real    1m13.995s
user    0m0.001s
sys     0m0.000s
 */
