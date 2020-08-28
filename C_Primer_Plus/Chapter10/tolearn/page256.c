/* 测试一下，"保护数组中的数据"给的栗子~ */
#include <stdio.h>
#define SIZE 100
void add_to(double ar[], int n, double val);

int main(void)
{
	int i;
	double prices[SIZE] = { prices[0] = 1};

	for (i = 0; i < SIZE; i++)
		printf("%.1f, ", prices[i]);
	add_to(prices, SIZE, 2.50);
	putchar('\n');
	for (i = 0; i < SIZE; i++)
		printf("%.1f, ", prices[i]);

	return 0;
}

void add_to(double ar[], int n, double val)
{
	int i;

	for (i = 0; i < n; i++)
		ar[i] += val;
}
