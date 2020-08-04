/* print2.c -- 更多 printf()的特性 */
#include <stdio.h>
int main(void)
{
	unsigned int un = 3000000000;  // int 为32位和 short 为16位的系统
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	// 可能是系统原因，%lld和%ld的长度是一样的
	printf("verybig = %lld and not %ld\n", verybig, verybig);

	return 0;
}
