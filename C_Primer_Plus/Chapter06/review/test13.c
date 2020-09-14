/* 定义一个函数，接受一个int类型的参数，并以long类型返回参数的平方值。 */
#include <stdio.h>
long square1(int num);
long square2(int num);
int main(void)
{
	printf("%ld\n", square1(10));
	printf("%ld\n", square2(10));

	return 0;
}

long square1(int num) {
	return ((long) num) * num;
}

long square2(int num) {
	return (long) (num * num);
}

/* 分析:
函数的参数为int类型，为了确保返回值为long类型，必须使用类型转换，
并且数值等于该数的平方。处理方法有很多，其中更加安全的方式如
square1()。这样能够保证在计算平方之前就已经将类型转换为long类型，
返回值类型为long类型。square2()则不够安全，主要原因在于计算平方
时使用int类型，对于较大的数值，会产生int类型的越界，截断结果。
转换为long类型后，结果依然是截断后的错误数据。
 */
