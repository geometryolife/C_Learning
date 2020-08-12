// colddays.c -- 找出0摄氏度以下的天数占总天数的百分比
#include <stdio.h>
// 定义明示常量
#define ZERO 0
int main(void)
{
	// 变量声明
	int coldday = 0;
	int totalday = 0;
	float temprature;

	// 编写提示语，提示用户输入
	printf("请输入一个温度，按q退出:\n");
	// 编写核心代码，判断温度，计算百分比
	while (scanf("%f", &temprature) == 1)
	{
		totalday++;
		if (temprature < ZERO)
			coldday++;
	}
	if (totalday != 0)
	{
		printf("您输入的 %d 天中，有 %d 天气温在0度以下，占总天数 %.1f%%\n",
				totalday, coldday, (float) 100.0 * coldday / totalday);
	}
	else
		printf("没有输入有效数据!\n");
}
