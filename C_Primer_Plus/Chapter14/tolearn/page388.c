/* 修改主调函数中的值，需要传递成员的地址 */
#include <stdio.h>
#define FL 50

struct funds {
	char bank[FL];
	double bankfund;
	char save[FL];
	double savefund;
	double total;
};

void modify(double, double, double *);

int main(void)
{
	struct funds stan = {
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94,
		0.00
	};

	modify(stan.bankfund, stan.savefund, &stan.total);
	printf("Stan has a total of $%.2f.\n", stan.total);

	return 0;
}

void modify(double x, double y, double * t)
{
	*t = x + y;
}


/*
>>> Execution Result:
Stan has a total of $12576.21.
 */
