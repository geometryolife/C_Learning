/* addresses.c -- 字符串的地址 */
#define MSG "I'm special"

#include <stdio.h>
int main()
{
	char ar[] = MSG;
	const char * pt = MSG;
	printf("address of \"I'm special\": %p \n", "I'm special");
	printf("              address ar: %p\n", ar);
	printf("              address pt: %p\n", pt);
	printf("          address of MSG: %p\n", MSG);
	printf("address of \"I'm special\": %p \n", "I'm special");
	return 0;
}


/*
>>> Execution Result:
address of "I'm special": 0x400660
              address ar: 0x7ffc70ea2bb0
              address pt: 0x400660
          address of MSG: 0x400660
address of "I'm special": 0x400660
 */
