/* 自定义一个函数输出Smile!，调用一次输出一个 */
#include <stdio.h>
void smile(void);

int main(void)
{
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	printf("\n");
}

void smile(void)
{
	printf("Smile!");
}
