// 可以省略一个或多个表达式(但是不能省略分号)，
// 只要在循环中包括能结束循环的语句即可。
#include <stdio.h>
int main(void)
{
	int ans, n;
	ans = 2;

	for (n = 3; ans <= 25;)
		ans = ans * n;
	printf("n = %d; ans = %d.\n", n, ans);

	return 0;
}
