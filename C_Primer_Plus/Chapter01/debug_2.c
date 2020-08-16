/* debug_2 -- 学习设置断点 */
#include <stdio.h>
void printNum(int a)
{
	printf("printNum\n");
	while(a > 0)
	{
		printf("%d\n", a);
		a--;
	}
}
void printNum2(int a, int num)
{
	printf("printfNum\n");
	while(a > num && a > 0)
	{
		printf("%d\n", a);
		a--;
	}
}
int div(int a, int b)
{
	printf("a = %d, b = %d\n", a, b);
	int temp = a / b;
	return temp;
}
int main(int argc, char *argv[])
{
	printNum2(12, 5);
	printNum(10);
	div(10, 0);
	return 0;
}
