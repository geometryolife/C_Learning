/* 改进程序 globla.c，让其避免输入非数字时造成无限循环。 */
#include <stdio.h>
#include <ctype.h>
int units = 0;
void critic(void);
int main(void)
{
	extern int units;

	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic();
	printf("You must have looked it up!\n");

	return 0;
}

void critic(void)
{
	printf("No luck, my friend. Try again.\n");
	while (getchar() != '\n')
		continue;
	scanf("%d", &units);
}


/*
>>> Execution Result:
How many pounds to a firkin of butter?
asd
No luck, my friend. Try again.
23
No luck, my friend. Try again.
56
You must have looked it up!
 */
