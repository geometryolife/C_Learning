// echo_eof.c -- 重复输入，直到文件结尾
#include <stdio.h>
int main(void) {
  int ch;

  while ((ch = getchar()) != EOF)
    putchar(ch);

  return 0;
}

/*
>>> Execution Result:
Hello, 世界!
Hello, 世界!
Joe
Joe
14 Aug 2021 重游。
14 Aug 2021 重游。

real    0m48.759s
user    0m0.001s
sys     0m0.000s
 */
