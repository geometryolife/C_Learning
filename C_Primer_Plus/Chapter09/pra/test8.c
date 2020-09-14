/* 第6章的程序清单6.20中，power()函数返回一个double类型数的正整数次幂。
改进该函数，使其能正确计算负幂。另外，函数要处理0的任何次幂都为0，任何
数的0次幂都为1 (函数应报告0的0次幂未定义，因此把该值处理为1)。要使用
一个循环，并在程序中测试该函数。 */
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
	int i;
	double mpow;
	double pow;

	if ((n == N) && (p == P))
	{
		printf("Undefined!\n");
		pow = 1.0;
	}
	else if (n == N)
		pow = 0.0;
	else if (p == P)
		pow = 1.0;
	else
	{
		if (p < P)
		{
			for (mpow = 1.0, i = 1; i <= -p; i++)
				mpow *= n;
			/* printf("%lf", mpow); */
			pow = 1.0 / mpow;
		}
		else
			for (pow = 1.0, i = 1; i <= p; i++)
				pow *= n;
	}

	return pow;
}


/*
>>> Execution Result:
Enter a number and the positive integer power to which
the number will be raised. Enter q to quit
0 0
Undefined!
0 to the power 0 is 1
Enter next pair of numbers or q to quit.
21.5 0
21.5 to the power 0 is 1
Enter next pair of numbers or q to quit.
0 12
0 to the power 12 is 0
Enter next pair of numbers or q to quit.
2 3
2 to the power 3 is 8
Enter next pair of numbers or q to quit.
2 4
2 to the power 4 is 16
Enter next pair of numbers or q to quit.
2 -3
2 to the power -3 is 0.125
Enter next pair of numbers or q to quit.
2 -4
2 to the power -4 is 0.0625
Enter next pair of numbers or q to quit.
q
Hope you enjoyed this power trip -- bye!
 */



/*
清单程序
#include <stdio.h>
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
	double pow = 1;
	int i;

	for (i = 1; i <= p; i++)
		pow *= n;

	return pow;
}
 */
