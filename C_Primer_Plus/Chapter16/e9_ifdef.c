/* ifdef.c -- 使用条件编译 */
#include <stdio.h>
#define JUST_CHECKING
#define LIMIT 4

int main(void) {
  int i;
  int total = 0;

  for (i = 1; i <= LIMIT; i++) {
    total += 2 * i * i + 1;
#ifdef JUST_CHECKING
    printf("i=%d, running total = %d\n", i, total);
#endif
  }
  printf("Grand total = %d\n", total);

  return 0;
}

/*
>>> Execution Result:
i=1, running total = 3
i=2, running total = 12
i=3, running total = 31
i=4, running total = 64
Grand total = 64
 */
