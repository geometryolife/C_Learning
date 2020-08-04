/* 输入一个 ASCII 码值，然后打印相应的字符 */
#include <stdio.h>
int main(void)
{
	int num;

	printf("Please enter a ASCII number: ");
	scanf("%d", &num);
	printf("The character for %d is %c.\n", num, num);

	return 0;
}
