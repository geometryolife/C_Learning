/* no_data.c -- 未初始化数组 */
#include <stdio.h>
#define SIZE 4
int main(void)
{
	int no_data[SIZE];  // 未初始化数组
	int i;

	printf("%2s%14s\n", "i", "no_data[i]");
	for (i = 0; i < SIZE; i++)
		printf("%2d%14d\n", i, no_data[i]);

	return 0;
}


/*
>>> Execution Result:
 i    no_data[i]
 0             0
 1             0
 2     944365696
 3         21953
 */
