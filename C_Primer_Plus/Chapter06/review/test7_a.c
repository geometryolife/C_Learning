#include <stdio.h>
int main(void)
{
	int i = 0;

	while (++i < 4)
		printf("Hi! ");
	do
		printf("Bye! ");
	while (i++ < 8);

	return 0;
}


/*
>>> Execution Result:
Hi! Hi! Hi! Bye! Bye! Bye! Bye! Bye!
 */
