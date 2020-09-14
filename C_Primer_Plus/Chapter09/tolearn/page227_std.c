/* 假设要管理4家酒店的客户服务，每家酒店的房价不同，但是每家酒店所有房间的房
价相同。对于预定住宿多天的客户，第2天的房费是第1天的95%，第3天是第2天的95%，
以此类推(暂不考虑这种策略的经济效益)。设计一个程序让用户指定酒店和入住天数，
然后计算并显示总费用。同时，程序要实现一份菜单，允许用户反复输入数据，除非用
户选择退出。 */
#include <stdio.h>
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define CHARACTER "****************************************"
void control(void);
int menu(void);
int getnights(void);
void showprice(double, int);
int main(void)
{
	control();

	return 0;
}

void control(void)  /* 控制函数 */
{
	int nights, code;
	double hotel_rate;

	while ((code = menu()) != QUIT)
	{
		switch (code)
		{
			case 1: hotel_rate = HOTEL1;
					break;
			case 2: hotel_rate = HOTEL2;
					break;
			case 3: hotel_rate = HOTEL3;
					break;
			default: hotel_rate = HOTEL4;
		}
		nights = getnights();
		showprice(hotel_rate, nights);
	}
	printf("Thank you and goodby.\n");
}

int menu(void)  /* 菜单函数 */
{
	int code, status;

	printf("%s%s\n", CHARACTER, CHARACTER);
	printf("Enter the number of the desired hotel:\n");
	printf("1) Fairfield Arms       2) Hotel Olympic\n");
	printf("3) Chertworthy Plaza    4) The Stockton\n");
	printf("5) Quit\n");
	printf("%s%s\n", CHARACTER, CHARACTER);
	while ((status = scanf("%d", &code)) != 1 ||
			(code < 1 || code > 5))
	{
		if (status != 1)
			scanf("%*s");  /* 处理非整数输入 */
		printf("Enter an integer from 1 to 5, please.\n");
	}

	return code;
}

int getnights(void)
{
	int nights;

	printf("How many nights are needed? ");
	while (scanf("%d", &nights) != 1)
	{
		scanf("%*s");  /* 处理非整数输入 */
		printf("Please enter an integer, such as 2.\n");
	}

	return nights;
}

void showprice(double hotel_rate, int nights)  /* 计算并显示总价函数 */
{
	int n;
	double total = 0.0;
	double factor = 1.0;

	for (n = 1; n <= nights; n++, factor *= DISCOUNT)
		total += (hotel_rate * factor);
	printf("The total cost will be $%.2f.\n", total);
}


/*
>>> Execution Result:
********************************************************************************
Enter the number of the desired hotel:
1) Fairfield Arms       2) Hotel Olympic
3) Chertworthy Plaza    4) The Stockton
5) Quit
********************************************************************************
1
How many nights are needed? 2
The total cost will be $351.00.
********************************************************************************
Enter the number of the desired hotel:
1) Fairfield Arms       2) Hotel Olympic
3) Chertworthy Plaza    4) The Stockton
5) Quit
********************************************************************************
asd
Enter an integer from 1 to 5, please.
3
How many nights are needed? asd
Please enter an integer, such as 2.
5
The total cost will be $1153.72.
********************************************************************************
Enter the number of the desired hotel:
1) Fairfield Arms       2) Hotel Olympic
3) Chertworthy Plaza    4) The Stockton
5) Quit
********************************************************************************
5
Thank you and goodby.
 */

/*
原程序勘误:
书本中的程序存在冗余的代码，原程序中(32行开始)的switch语句，default语句
永远不会被执行，应该去除。原因: menu()函数的while循环已经控制输入为1~5，
若输入的是5，while ((code = menu()) != QUIT)，程序会直接结束，不会进入
循环。所以witch语句接收到的数字只有1~4，意味着原程序中只有case1~case4会
被执行，default语句永远不会被执行。把原程序中的case4修改成如上面的代码更
显的干净整洁。
 */
