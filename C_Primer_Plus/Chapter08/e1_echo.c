// echo.c -- 重复输入
// 使用行缓冲
#include <stdio.h>
int main(void) {
  char ch;

  while ((ch = getchar()) != '#')
    putchar(ch);

  return 0;
}

/*
>>> Execution Result:
Hello, 世界!
Hello, 世界!
Joe
Joe
Nice#
Nice
real    1m12.434s
user    0m0.001s
sys     0m0.000s

Hello, World!
Hello, World!
#

real    0m19.278s
user    0m0.001s
sys     0m0.000s
 */
