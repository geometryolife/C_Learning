// 让计数器递增 2、10等
#include <stdio.h>
int main(void)
{
	int n;  // 从2开始，每次递增13
	
	for (n = 2; n < 60; n = n + 13)
		printf("%2d\n", n);

	return 0;
}
