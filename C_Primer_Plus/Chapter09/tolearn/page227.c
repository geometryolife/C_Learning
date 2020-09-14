/* 假设要管理4家酒店的客户服务，每家酒店的房价不同，但是每家酒店所有房间的房
价相同。对于预定住宿多天的客户，第2天的房费是第1天的95%，第3天是第2天的95%，
以此类推(暂不考虑这种策略的经济效益)。设计一个程序让用户指定酒店和入住天数，
然后计算并显示总费用。同时，程序要实现一份菜单，允许用户反复输入数据，除非用
户选择退出。 */
#include <stdio.h>
#define QUIT 5
#define HOTEL1 158
#define HOTEL2 188
#define HOTEL3 228
#define HOTEL4 355
#define DISCOUNT 0.95
int menu(void);
/* int total(double hotel, int day); */
int main(void)
{
	int code;
	double hotel;

	while ((code = menu()) != QUIT)
	{
		switch (code)
		{
			case 1: hotel = HOTEL1;
					break;
			case 2: hotel = HOTEL2;
					break;
			case 3: hotel = HOTEL3;
					break;
			case 4: hotel = HOTEL4;
					break;
			default:
					break;
		}
	}

	return 0;
}

int menu(void)
{
	int num;

	printf("========================================\n");
	printf("这里有四家酒店可供您选择:\n");
	printf("1) 特斯拉1号旅     2) 美家园酒店\n");
	printf("3) 欧洲小镇酒店    4) 皇家园林酒店\n5) 退出\n");
	printf("请问您想入住哪家酒店(请输入1~5)\n");
	printf("========================================\n");
	while ((scanf("%d", &num) != 1) && (num < 5) && (num > 0))
		printf("您输入有误，请重新输入!\n");
	printf("请问您需要住多少天:\n");

	return num;
}

void total(double hotel, int day)
{
	int n;
	double money = 0.0;
	double factor = 1.0;

	for (n = 1; n <= day; factor *= DISCOUNT)
		money += (hotel * DISCOUNT);
	printf("大约需要 %.2f 元。\n", money);
}
