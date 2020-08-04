// escape.c -- 使用转义序列
#include <stdio.h>
int main(void)
{
	float salary;

	printf("\aEnter your desired monthly salary:");  // 发出一声警报
	printf(" $_______\b\b\b\b\b\b\b");  // 通常，退格不会擦除退回所经过的字符
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary,
			salary * 12.0);  // 光标移至下一行，下一个制表点，然后打印
	printf("\rGee! \n");  // 光标回到当前行的起始处，然后打印 Gee!，接着光标移至下一行
	
	return 0;
}
