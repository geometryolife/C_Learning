/* 第6章的程序清单6.20中，power()函数返回一个double类型数的正整数次幂。
改进该函数，使其能正确计算负幂。另外，函数要处理0的任何次幂都为0，任何
数的0次幂都为1 (函数应报告0的0次幂未定义，因此把该值处理为1)。要使用
递归函数实现，并在程序中测试该函数。 */
#include <stdio.h>
#define N 0.0
#define P 0
double power(double, int);
int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the positive integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quit\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");

	return 0;
}

double power(double n, int p)
{
	double mpow;
	double pow = 1.0;

	if (p > 0)
		pow = n * power(n, p - 1);
	if (p < 0)
	{
		mpow = n * power(n , -p - 1);
		pow = 1.0 / mpow;
	}
	if ((n == N) && (p == P))
	{
		printf("Undefined!\n");
		pow = 1.0;
	}

	return pow;
}


/*
>>> Execution Result:
Enter a number and the positive integer power to which
the number will be raised. Enter q to quit
2 2
2 to the power 2 is 4
Enter next pair of numbers or q to quit.
2 3
2 to the power 3 is 8
Enter next pair of numbers or q to quit.
2 4
2 to the power 4 is 16
Enter next pair of numbers or q to quit.
2 -2
2 to the power -2 is 0.25
Enter next pair of numbers or q to quit.
2 -3
2 to the power -3 is 0.125
Enter next pair of numbers or q to quit.
2 -4
2 to the power -4 is 0.0625
Enter next pair of numbers or q to quit.
0 5
Undefined!
0 to the power 5 is 0
Enter next pair of numbers or q to quit.
7.3 0
7.3 to the power 0 is 1
Enter next pair of numbers or q to quit.
0 0
Undefined!
0 to the power 0 is 1
Enter next pair of numbers or q to quit.
q
Hope you enjoyed this power trip -- bye!
 */

/* 总结:
这道题更适合使用递归实现，代码量相较于循环实现的代码量要少且简洁。 */
