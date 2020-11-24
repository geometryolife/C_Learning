/* hiding.c -- 块中的变量 */
#include <stdio.h>
int main(void)
{
	int x = 30;  /* 原始的 x */

	printf("x in outer block: %d at %p\n", x, &x);
	{
		int x = 77;  /* 新的 x，隐藏了原始的 x */
		printf("x in inner block: %d at %p\n", x, &x);
	}
	printf("x in outer block: %d at %p\n", x, &x);
	while (x++ < 33)  /* 原始的 x */
	{
		int x = 100;  /* 新的 x，隐藏了原始的 x */
		x++;
		printf("x in while loop: %d at %p\n", x, &x);
	}
	printf("x in outer block: %d at %p\n", x, &x);

	return 0;
}


/*
>>> Execution Result:
x in outer block: 30 at 0x7fff78157a0c
x in inner block: 77 at 0x7fff78157a08
x in outer block: 30 at 0x7fff78157a0c
x in while loop: 101 at 0x7fff78157a04
x in while loop: 101 at 0x7fff78157a04
x in while loop: 101 at 0x7fff78157a04
x in outer block: 34 at 0x7fff78157a0c
 */
