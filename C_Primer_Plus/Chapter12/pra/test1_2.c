/* 方法2: 使用指针实现 */
#include <stdio.h>
void critic(int * u);

int main(void)
{
	int units;

	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic(&units);
	printf("You must have looked it up!\n");

	return 0;
}

void critic(int * u)
{
	printf("No luck, my friend. Try again.\n");
	while (getchar() != '\n')
		continue;
	scanf("%d", u);
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
