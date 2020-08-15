// guess.c 的改进版本
#include <stdio.h>
int main(void)
{
	int guess = 1;

	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespone with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	printf("Un...is your number %d?\n", guess);
	while (getchar() != 'y')  // 获取响应，与y做对比
	{
		printf("Well, then, is it %d?\n", ++guess);
		while (getchar() != '\n')
			continue;  // 跳过剩余的输入行
	}
	printf("I knew I could do it!\n");

	return 0;
}
