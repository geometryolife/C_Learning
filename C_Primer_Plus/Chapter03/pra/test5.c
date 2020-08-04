/* 一年大约有3.156E+7秒。用户输入年龄，然后显示该年龄的秒数。*/
#include <stdio.h>
int main(void)
{
	int years;
	float seconds;

	printf("How old are you?\n");
	printf("Please enter your ages: ");
	scanf("%d", &years);
	seconds = years * 3.156E+7;
	printf("You live about %e seconds.\n", seconds);

	return 0;
}
