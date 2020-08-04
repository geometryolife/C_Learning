// 跳过输入到达第1个既不是空白字符也不是数字的位置
#include <stdio.h>
int main(void)
{
	int num;

	while (scanf("%d", &num) == 1)
		;  // 跳过整数输入

	return 0;
}
