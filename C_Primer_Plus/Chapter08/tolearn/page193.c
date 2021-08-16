#include <ctype.h>   // 为 isspace() 函数提供原型
#include <stdbool.h> // 为布尔值提供 true、false 的定义
#include <stdio.h>

int main(void) {
  int c;               // 输入的字符
  char prev;           // 读入的前一个字符
  long n_chars = 0L;   // 字节数
  int n_lines = 0;     // 行数
  int n_words = 0;     // 单词数
  int p_lines = 0;     // 不完整的行数
  bool inword = false; // 如果 c 在单词中，inword 等于 true

  printf("Enter text to be analyzed:\n");
  prev = '\n'; // 用于识别完整的行
  while ((c = getchar()) != EOF) {
    n_chars++; // 统计字符
    if (c == '\n')
      n_lines++; // 统计行
    if (!isspace(c) && !inword) {
      inword = true; // 开始一个新的单词
      n_words++;     // 统计单词
    }
    if (isspace(c) && inword)
      inword = false; // 到达单词的末尾
    prev = c;         // 保存字符的值
  }

  if (prev != '\n')
    p_lines = 1;
  printf("characters = %ld, words = %d, lines = %d, partial lines = %d\n",
         n_chars, n_words, n_lines, p_lines);

  return 0;
}

/*
>>> Execution Result:
Enter text to be analyzed:
Reason is a
powerful servant but
an inadequate master.
characters = 55, words = 9, lines = 3, partial lines = 0

real    0m55.805s
user    0m0.001s
sys     0m0.000s
 */
