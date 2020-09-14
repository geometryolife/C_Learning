// postage.c -- 一类邮资
// 理解逗号运算符在for循环中的作用
#include <stdio.h>
int main(void)
{
	const int FIRST_OZ = 46;  // 2013 邮资
	const int NEXT_OZ = 20;
	int ounces, cost;

	printf(" ounces  cost\n");
	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
		printf("%5d   $%4.2f\n", ounces, cost / 100.0);

	return 0;
}


/*
>>> Execution Result:
 ounces  cost
    1   $0.46
    2   $0.66
    3   $0.86
    4   $1.06
    5   $1.26
    6   $1.46
    7   $1.66
    8   $1.86
    9   $2.06
   10   $2.26
   11   $2.46
   12   $2.66
   13   $2.86
   14   $3.06
   15   $3.26
   16   $3.46
 */

/*
逗号运算符并不局限于在for循环中使用，但这是它最常用的地方。
逗号运算符有两个其它性质。首先，它保证了被它分隔的表达式从
左往右求值(逗号是一个序列点，所以逗号左侧项的所有副作用都在
程序执行逗号右侧项之前发生)。
例如: ounces++, cost = ounces * FIRST_OZ 这时顺序很重要
其次，整个逗号表达式的值是右侧项的值。
例如:
x = (y = 3, (z = ++y + 2) + 5);
>>> x = 11
--------------------
houseprice = 249, 500;
>>> houseprice = 249;
    500;
--------------------
houseprice = (249, 500)
>>> houseprice = 500;
 */
