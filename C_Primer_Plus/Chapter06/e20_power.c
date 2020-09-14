// power.c -- 计算数的整数幂
#include <stdio.h>
double power(double n, int p);  // ANSI 函数原型
int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the positive integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quite.\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);  // 函数调用
		// %g 根据值的不同，自动选择 %f 或 %e。
		// %e 格式用于指数小于-4或者大于等于精度时
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");

	return 0;
}

double power(double n, int p)  // 函数定义
{
	double pow = 1;
	int i;

	for (i = 1; i <= p; i++)
		pow *= n;

	return pow;  // 返回 pow 函数
}


/*
>>> Execution Result:
Enter a number and the positive integer power to which
the number will be raised. Enter q to quite.
1.2 12
1.2 to the power 12 is 8.9161
Enter next pair of numbers or q to quit.
2
16
2 to the power 16 is 65536
Enter next pair of numbers or q to quit.
q
Hope you enjoyed this power trip -- bye!
 */

/*
编译器在程序中首次遇到power()时，需要知道power()的 返回值类型。
此时，编译器尚未执行到power()的定义，并不知道函数定义中的返回值
类型是double。因此必须通过前置声明(forward declaration)预先说明
函数的返回类型。前置声明告诉编译器，power()定义在别处，其返回类
型为double。如果把power()函数的定义置于main()的文件顶部，就可以
省略前置声明，因为编译器执行到main()之前已经知道power()到所有信
息。但是这不是C的标准风格。因为main()通常只提供整个程序的框架，
最好把main()放在所有函数定义的前面。另外，通常把函数放在其它文
件中，所以前置声明必不可少。
 */
