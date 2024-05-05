// shoes1.c -- 把鞋码转换成英寸
#include <stdio.h>
#define ADJUST 7.31 // 字符常量
int main(void) {
  const double SCALE = 0.333; // const变量
  double shoe, foot;

  shoe = 9.0;
  foot = SCALE * shoe + ADJUST;
  printf("Shoe size (men's) foot length\n");
  printf("%8.1f %14.2f inches\n", shoe, foot);

  return 0;
}

/*
>>> Execution Result:
Shoe size (men's) foot length
     9.0          10.31 inches

real    0m0.002s
user    0m0.000s
sys     0m0.000s
 */
