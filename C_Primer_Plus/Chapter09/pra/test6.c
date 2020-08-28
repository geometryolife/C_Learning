/* 编写并测试一个函数，该函数以3个double变量的地址作为参数，把最小
 * 值放入第1个变量，中间值放入第2个变量，最大值放入第3个变量。 */
#include <stdio.h>
void compare(double *, double *, double *);
void compare2(double *, double *, double *);
void compare3(double *, double *, double *);

int main(void)
{
	double x, y, z;
	double x2, y2, z2;
	double x3, y3, z3;

	scanf("%lf%lf%lf", &x, &y, &z);
	x3 = x2 = x;
	y3 = y2 = y;
	z3 = z2 = z;
	compare(&x, &y, &z);
	printf("%.2lf\t%.2lf\t%.2lf\n", x, y, z);
	compare2(&x2, &y2, &z2);
	printf("%.2lf\t%.2lf\t%.2lf\n", x2, y2, z2);
	// 递归算法
	/* compare3(&x3, &y3, &z3); */

	return 0;
}

// 又长又臭的代码
void compare(double * x, double * y, double * z)
{
	double temp;

	if (*x < *y)
	{
		if (*x < *z)
		{
			if (*y > *z)
			{
				temp = *z;
				*z = *y;
				*y = temp;
			}
		}
		else
		{
			temp = *z;
			*z = *y;
			*y = *x;
			*x = temp;
		}
	}
	else
	{
		if (*x < *z)
		{
			temp = *y;
			*y = *x;
			*x = temp;
		}
		else
		{
			if (*y > *z)
			{
				temp = *z;
				*z = *x;
				*x = temp;
			}
			else
			{
				temp = *y;
				*y = *z;
				*z = *x;
				*x = temp;
			}
		}
	}
}


// 改进(冒泡排序，大的数不断被往后移动)
void compare2(double * x, double * y, double * z)
{
	double temp;

	if (*z < *y)
	{
		temp = *z;
		*z = *y;
		*y = temp;
	}
	if (*z < *x)
	{
		temp = *z;
		*z = *x;
		*x = temp;
	}
	if (*y < *x)
	{
		temp = *y;
		*y = *x;
		*x = temp;
	}
}



/*
void compare3(double * x, double * y, double * z)
{
	double temp1, temp2, temp3;

	if (*x < *y)
	{
		temp1 = *x;
		if (*z < temp1)
		{
			temp1 = *z;
			if (*x > *y)
			{
				temp3 = *x;
				if (*z > temp3)
				{
					temp3 = *z;
					temp2 = *y;
				}
			}
		}
	}
	*x = temp1;
	*y = temp2;
	*z = temp3;
}
*/



/*
// 递归算法
void compare3(double * x, double * y, double * z)
{
	double temp1;

	temp1 = *x;
	if (*y < temp1)
		compare3(&temp1, &y3, &z3)
}
*/










