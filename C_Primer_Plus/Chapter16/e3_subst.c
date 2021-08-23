/* subst.c -- 在字符串中替换 */
#include <stdio.h>
#define PSQS(x) printf("The square of " #x " is %d.\n", ((x) * (x)))

int main(void) {
  int y = 5;
  PSQS(y);
  PSQS(2 + 4);

  return 0;
}

/*
>>> Execution Result:
The square of y is 25.
The square of 2 + 4 is 36.
 */
