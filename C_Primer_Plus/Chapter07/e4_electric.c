// electric.c -- 计算电费
#include <stdio.h>
#define RATE1 0.13230  // 首次使用360kwh的费率
#define RATE2 0.15040  // 接着再使用108kwh的费率
#define RATE3 0.30025  // 接着再使用252kwh的费率
#define RATE4 0.34025  // 使用超过720kwh的费率
#define BREAK1 360.0  // 费率的第1个分界点
#define BREAK2 468.0  // 费率的第2个分界点
#define BREAK3 720.0  // 费率的第3个分界点
#define BASE1 (RATE1 * BREAK1)  // 使用360kwh的费用
#define BASE2 (BASE1 + (RATE2 * (BREAK2 -BREAK1)))  // 使用468kwh的电费
#define BASE3 (BASE2 + (RATE3 * (BREAK3 -BREAK2)))  // 使用720kwh的电费
int main(void)
{
	double kwh;  // 使用的千瓦时
	double bill;  // 电费

	printf("Please enter the kwh used.\n");
	scanf("%lf", &kwh);  // %lf对应double类型
	if (kwh <= BREAK1)
		bill = kwh * RATE1;
	else if (kwh <= BREAK2)  // 360~468 kwh
		bill = BASE1 + ((kwh - BREAK1) * RATE2);
	else if (kwh <= BREAK3)  // 468~720 kwh
		bill = BASE2 + ((kwh - BREAK2) * RATE3);
	else  // 超过 720 kwh
		bill = BASE3 + ((kwh - BREAK3) * RATE4);
	printf("The charge for %.1fkwh is $%1.2f.\n", kwh, bill);

	return 0;
}
