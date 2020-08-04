/* 创建toes变量，设置为10，求两倍toes和toes的平方，打印三个值 */
#include <stdio.h>
int main(void)
{
	int toes;
	int double_toes;
	int squared_toes;

	toes = 10;
	double_toes = 2 * toes;  // 两倍toes
	squared_toes = toes * toes;  // toes的平方
	printf("toes = %d\ndouble_toes = %d\nsquared_toes = %d\n", toes, double_toes, squared_toes);

	return 0;
}

