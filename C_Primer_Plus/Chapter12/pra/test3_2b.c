/* test3_2b.c -- 主函数文件
compile with test3_2a.c */
#include <stdio.h>
#include "test3_2.h"

int main(void)
{
	int mode;
	int prev_mode = METRIC;
	double distance, fuel;

	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		check_mode(&mode);
		if (mode == USE_RECENT)
			mode = prev_mode;
		prev_mode = mode;
		get_info(mode, &distance, &fuel);
		show_info(mode, distance, fuel);
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf("%d", &mode);
	}
	printf("Done.\n");

	return 0;
}
