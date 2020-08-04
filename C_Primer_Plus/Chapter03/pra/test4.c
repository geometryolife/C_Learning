/* 读取一个浮点数，先打印成小数点形式，再打印成指数形式，最后打印成p计数法形式(如果系统支持) */
#include <stdio.h>
int main(void)
{
	float fp;

	printf("Enter a floating-point value: ");
	scanf("%f", &fp);
	printf("fixed-point notation: %f\n", fp);
	printf("exponential notation: %e\n", fp);
	printf("p notation: %a\n", fp);

	return 0;
}
