/* 重新设计编程练习2，要求只使用自动变量。该程序提供的用户界面不变，即提示
用户输入模式等。但是，函数调用要作相应变化。 */

#include <stdio.h>
#include "test3_1.h"

int main(void)
{
	int mode;

	printf("Enter 0 for metric mode, 1 for US mode");
	printf(" (-1 to quit): ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		/* get_info(); */
		/* show_info(); */
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf("%d", &mode);
	}
	printf("Done.\n");

	return 0;
}
