// break.c -- 使用 break 退出循环
#include <stdio.h>
int main(void)
{
	float length, width;

	printf("Enter the length of the rectangle(q to quit):\n");
	while (scanf("%f", &length) == 1)
	{
		printf("Length = %0.2f\n", length);
		printf("Enter its width:\n");
		if (scanf("%f", &width) != 1)
			break;
		printf("Width = %0.2f\n", width);
		printf("Area = %0.2f\n", length * width);
		printf("Enter the length of the rectangle(q to quit):\n");
	}
	printf("Done.\n");

	return 0;
}
