/* flc.c -- 有趣的常量 */
#include <stdio.h>
#define COLS 4
int sum(const int ar[], int n);
int sum2d(const int ar[][COLS], int rows);
int main(void)
{
	int total1, total2, total3;
	int * pt1;
	const int (*pt2)[COLS];

	pt1 = (int [2]) { 10, 20 };
	pt2 = (const int [2][COLS]) { { 1, 2, 3, -9 }, { 4, 5, 6, -8 } };
	
	total1 = sum(pt1, 2);
	total2 = sum2d(pt2, 2);
	total3 = sum((int []) { 4, 4, 4, 5, 5, 5 }, 6);

	printf("total1 = %d\n", total1);
	printf("total2 = %d\n", total2);
	printf("total3 = %d\n", total3);

	return 0;
}

int  sum(const int ar[], int n)
{
	int i;
	int total = 0;

	for (i = 0; i < n; i++)
		total += ar[i];

	return total;
}

int sum2d(const int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot = 0;

	for (r = 0; r < rows; r++)
		for (c = 0; c < COLS; c++)
			tot += ar[r][c];

	return tot;
}


/*
>>> Execution Result:
total1 = 30
total2 = 4
total3 = 27
 */

/*
程序勘误:
书本的程序清单有错误。16行中的total2 = sum2d(pt2, 2)中传递了指针类型
不兼容的参数(第一个参数)。因为指针pt2在声明和初始化时，未使用const关
键字，而sum2d函数原型和函数定义时使用了const限定，在调用sum2d函数时，
传递了非const指针实参。导致编译器发出了"从不兼容指针类型传递参数"的
警告。
第一种修改方式: 在第10行声明指针pt2和第13行初始化时加上const关键字。
第二种修改方式: 把sum2d函数原型和函数定义中的const关键字去掉。
 */
