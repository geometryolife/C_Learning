// 测试break在嵌套循环中的作用
// Bug: 若在内层循环输入非数字，则出现无限循环
#include <stdio.h>
int main(void)
{
	int p,q;

	scanf("%d", &p);
	while (p > 0)
	{
		printf("Input1: %d\n", p);
		scanf("%d", &q);
		while (q > 0)
		{
			printf("Input2: %d\n", p * q);
			if (q > 100)
				break;  // 跳出内层循环
			scanf("%d", &q);
		}
		if (q > 100)
			break;  // 跳出外层循环
		scanf("%d", &p);
	}

	return 0;
}
