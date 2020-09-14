/* trouble.c -- 误用=会导致无限循环 */
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	status = scanf("%ld", &num);
	while (status = 1)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		status = scanf("%ld", &num);
	}
	printf("Those integers sum to %ld.\n", sum);

	return 0;
}

/*
while (status = 1) 相当于 while (1)，循环不会退出。
虽然用户输入q，status被设置为0，但是循环的测试条件把status
又重新设置为1，进入了下一次迭代。
程序一直运行着，用户在输入q后完全没机会继续输入。如果scanf()
读取指定形式的输入失败，就把无法读取的输入留在输入队列中，
供下次读取。当scanf()把q作为整数读取失败了，它把q留下。在
下次循环时，scanf()从上次读取失败的地方(q)开始读取，scanf()
把q作为整数读取，又失败了。因此创建了一个无限失败的循环。
 */
