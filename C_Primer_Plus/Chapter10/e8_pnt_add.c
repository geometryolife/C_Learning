/* pnt_add.c -- 指针地址 */
#include <stdio.h>
#define SIZE 4

int main(void)
{
	short dates[SIZE];
	short * pti;
	short index;
	double bills[SIZE];
	double * ptf;

	pti = dates;  // 把数组地址赋值给指针
	ptf = bills;
	printf("%23s %15s\n", "short", "double");
	for (index = 0; index < SIZE; index++)
		// short类型占用两个字节，double类型占用8个字节
		printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);

	return 0;
}


/*
>>> Execution Result:
                  short          double
pointers + 0: 0x7fff01353158 0x7fff01353160
pointers + 1: 0x7fff0135315a 0x7fff01353168
pointers + 2: 0x7fff0135315c 0x7fff01353170
pointers + 3: 0x7fff0135315e 0x7fff01353178
 */
