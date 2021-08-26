/* doubincl.c -- 包含头文件两次 */
#include "e10_names.h"
#include "e10_names.h" // 不小心第2次包含头文件
#include <stdio.h>

int main() {
  names winner = {"Less", "Ismoor"};
  printf("The winner is %s %s.\n", winner.first, winner.last);

  return 0;
}

/*
>>> Execution Result:
The winner is Less Ismoor.
 */
