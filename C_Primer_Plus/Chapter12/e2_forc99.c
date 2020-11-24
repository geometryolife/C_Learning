/* forc99.c -- 新的 C99 块规则 */
#include <stdio.h>
int main()
{
	int n = 8;

	printf("Initially, n = %d at %p\n", n, &n);
	for (int n = 1; n < 3; n++)
		printf("    loop 1: n = %d at %p\n", n, &n);
	printf("After loop 1, n = %d at %p\n", n, &n);
	for (int n = 1; n < 3; n++)
	{
		printf("    loop 2 index n = %d at %p\n", n, &n);
		int n = 6;
		printf("  loop 2: n = %d at %p\n", n, &n);
		n++;
	}
	printf("After loop 2, n = %d at %p\n", n, &n);

	return 0;
}


/*
>>> Execution Result:
Initially, n = 8 at 0x7ffeb344b9dc
    loop 1: n = 1 at 0x7ffeb344b9d8
    loop 1: n = 2 at 0x7ffeb344b9d8
After loop 1, n = 8 at 0x7ffeb344b9dc
    loop 2 index n = 1 at 0x7ffeb344b9d4
  loop 2: n = 6 at 0x7ffeb344b9d0
    loop 2 index n = 2 at 0x7ffeb344b9d4
  loop 2: n = 6 at 0x7ffeb344b9d0
After loop 2, n = 8 at 0x7ffeb344b9dc
 */
