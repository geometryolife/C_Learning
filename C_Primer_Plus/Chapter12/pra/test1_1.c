/* 不使用全局变量，重写程序清单 12.4。 */
/* 方法1: 把循环封装道critic()函数中 */
#include <stdio.h>
#define ANSWER 56

void critic(void);

int main(void)
{
	printf("How many pounds to a frikin of butter?\n");
	critic();
	printf("You must have looked it up!\n");

	return 0;
}

void critic(void)
{
	int units;

	scanf("%d", &units);
	while (units != ANSWER)
	{
		printf("No luck, my friend. Try again.\n");
		while (getchar() != '\n')
			continue;
		scanf("%d", &units);
	}
}


/*
>>> Execution Result:
How many pounds to a frikin of butter?
asd
No luck, my friend. Try again.
14
No luck, my friend. Try again.
56
You must have looked it up!
 */
