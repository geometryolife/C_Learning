/* 在美国，通常以英里/加仑来计算油耗；在欧洲，以升/100公里来计算。下面是
程序的一部分，提示用户选择计算模式(美制或公制)，然后接收数据并计算油耗。
如果用户输入了不正确的模式，程序向用户给出提示消息并使用上一次输入的正
确模式。请提供pe12-2a.h头文件和pe12-2a.c源文件。源代码文件应定义3个具有
文件作用域、内部链接的变量。一个表示模式、一个表示距离、一个表示消耗的
燃料。get_info()函数根据用户输入的模式提示用户输入相应数据，并将其存储到
文件作用域变量中。show_info()函数根据设置的模式计算并显示油耗。可以假设
用户输入的都是数值数据。 */

/* pe12-2b.c (test2_b.c) 与 pe12-2a.c (test2_a.c) 一起编译 */
#include <stdio.h>
static int mode_s;
static float distance;
static float fuel_consumed;

void set_mode(int m)
{
	if (m == 0)
		mode_s = m;
	else if (m == 1)
		mode_s = m;
	else
		printf("Invalid mode specified. Mode %d(%s)\n",
				mode_s, (mode_s == 0) ? "metric" : "US");
}

void get_info(void)
{
	if (mode_s == 0)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf("%f", &distance);
		printf("Enter fuel consumed in liters: ");
		scanf("%f", &fuel_consumed);
	}
	else
	{
		printf("Enter distance traveled in miles: ");
		scanf("%f", &distance);
		printf("Enter fuel consumed in gallons: ");
		scanf("%f", &fuel_consumed);
	}
}

void show_info(void)
{
	if (mode_s == 0)
		printf("Fuel consumption is %.2f liters per 100 km.\n",
				fuel_consumed / (distance / 100));
	else
		printf("Fuel consumption is %.1f miles per gallon.\n",
				distance / fuel_consumed);
}
