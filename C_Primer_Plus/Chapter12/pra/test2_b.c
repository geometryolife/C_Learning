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
#include "test2.h"
int main(void)
{
	int mode;

	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf("%d", &mode);
	}
	printf("Done.\n");

	return 0;
}
