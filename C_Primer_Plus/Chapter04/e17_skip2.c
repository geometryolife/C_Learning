// skip2.c -- 跳过输入中的前两个整数
#include <stdio.h>
int main(void)
{
	int n;

	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integers was %d\n", n);

	return 0;
}
