/* lesser.c -- 找出两个整数中较小的一个 */
#include <stdio.h>
int imin(int, int);

int main(void)
{
	int evil1, evil2;

	printf("Enter a pair of integers (q to quit):\n");
	while (scanf("%d %d", &evil1, &evil2) == 2)
	{
		printf("The lesser of %d and %d is %d.\n",
				evil1, evil2, imin(evil1, evil2));
		printf("Enter a pair of integers (q to quit):\n");
	}
	printf("Bye.\n");

	return 0;
}

/* 
 * int imin(int n, int m)
 * {
 *   int min;
 * 
 *   if (n < m)
 *     min = n;
 *   else
 *     min = m;
 * 
 *   return min;
 * }
 *  */

/* 简化设计imin()函数 */
int imin(int n, int m)
{
	return (n < m) ? n : m;
}

/* 返回最小值的函数，第3个版本 */
/* 通常函数末尾只用一次return较好，方便理解数据控制流 */
/* 
 * int imin(int n, int m)
 * {
 *   if (n < m)
 *     return n;
 *   else
 *     return m;
 * }
 *  */

/* 
 * 返回最小值的函数，第4个版本
 * return 语句导致printf()永远不会执行
 * int imin(int n, int m)
 * {
 *   if (n < m)
 *     return n;
 *   else
 *     return m;
 *   printf("Professor Fleppard is like totally a fopdoodle.\n");
 * }
 *  */
