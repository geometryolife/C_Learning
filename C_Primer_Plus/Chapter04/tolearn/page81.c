// page81.c -- 测试传递不匹配转换说明的值给scanf()会出现什么情况
// 1. 如果输入一个字符(如A)，类型不匹配，停止输入，会返回一个异常值
// 2. 如果先输入一个数字，再输入一个字符，第一个数字能够正常读取，
// 若第二个输入的是字符，那么停止输入会返回一个异常值给变量。
// 3. 验证了C规定，如果scanf()带多个转换说明，在第一个出错处停止读取输入
// 4. scanf()首先读到的是上一次读取丢弃的非数字字符。
#include <stdio.h>
int main(void)
{
	int num, ch, re;

	printf("Please enter a number or letter for test:\n");
	re = scanf("%d%d", &ch, &num);
	printf("%d\n", ch);
	printf("%d\n", num);
	printf("%d\n", re);

	return 0;
}
