// 测试把delta设置为0
#include <stdio.h>
int main(void)
{
	int n;
	int delta = 10;
	
	for (n = 1; n < 10000; n = n + delta)
		printf("n = %d\n", n);

	return 0;
}
