/* test3_1b.c -- 函数定义 */
#include <stdio.h>
#include "test3_1.h"

void set_mode(int mode)
{
	if (mode == 0)
		get_info(0);
	else if (mode == 1)
		get_info(1);
	else
	{
		printf("Invalid mode specified. mode 0(mertic) used.\n");
		get_info(0);
	}
}

void get_info(int mode)
{
	double distance, fuel_consumed;

	if (mode == 0)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in liters: ");
		scanf("%lf", &fuel_consumed);
	}
	else
	{
		printf("Enter distance traveled in miles: ");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in gallons: ");
		scanf("%lf", &fuel_consumed);
	}
	show_info(&mode, &distance, &fuel_consumed);
}

void show_info(int * mode, double * distance, double * fuel_consumed)
{
	if (mode == 0)
		printf("Fuel consumption is %.2f liters per 100 km.\n",
				*fuel_consumed / (*distance / 100.0));
	else
		printf("Fuel consumption is %.1f miles per gallon.\n",
				*distance / *fuel_consumed);
}
