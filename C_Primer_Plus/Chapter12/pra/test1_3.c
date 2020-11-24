/* 方法3: 使用返回值实现 */
#include <stdio.h>
int critic(void);

int main(void)
{
	int units;

	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		units = critic();
	printf("You must have looked it up!\n");

	return 0;
}

int critic(void)
{
	int u;

	printf("No luck, my friend. Try again.\n");
	while (getchar() != '\n')
		continue;
	scanf("%d", &u);
	return u;
}


/*
>>> Execution Result:
How many pounds to a firkin of butter?
asdg
No luck, my friend. Try again.
123
No luck, my friend. Try again.
56
You must have looked it up!
 */
