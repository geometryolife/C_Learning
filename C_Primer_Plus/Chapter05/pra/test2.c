// 提示用户输入一个整数，然后打印从该数到比该数大10的所有
// 整数(例如，用户输入5，则打印5~15的所有整数，包括5和15)。
// 要求打印的各值之间用一个空格、制表符或换行符分开。
#include <stdio.h>
int main(void)
{
	int num, pnum;

	printf("Please enter a number: ");
	scanf("%d", &num);
	for (pnum = num; pnum <= num + 10; pnum++)
		printf("%d ", pnum);
	printf("\n");

	return 0;
}
