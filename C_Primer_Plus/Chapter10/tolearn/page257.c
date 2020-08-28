/* 测试一下，"保护数组中的数据"给的栗子~ */
#include <stdio.h>
#define SIZE 10
int sum(int ar[], int n);

int main(void)
{
	int i;
	int prices[SIZE] = { prices[0] = 1};

	for (i = 0; i < SIZE; i++)
		printf("%d, ", prices[i]);
	printf("\n%d\n", sum(prices, SIZE));

	putchar('\n');
	for (i = 0; i < SIZE; i++)
		printf("%d, ", prices[i]);
	printf("\n%d\n", sum(prices, SIZE));

	return 0;
}

/* 原意是要求数组的和，但是调用了这个函数后， */
/* 既求了和，也让原数组的值发生了改变 */
/* 在函数声明和定义使用const关键字，编译器会捕获错误 */
int sum(int ar[], int n)  // 错误代码
{
	int i;
	int total = 0;

	for (i = 0; i < n; i++)
		total += ar[i]++;  // 错误递增了每个元素的值

	return total;
}
