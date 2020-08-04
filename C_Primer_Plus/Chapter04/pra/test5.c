// 提示用户输入以兆位每秒(Mb/s)为单位的下载速度和以兆字节(MB)为单
// 位的文件大小。程序中应计算文件的下载时间。注意，这里1字节等于8
// 位。使用float类型，并用/作为除号。该程序要以下面的格式打印3个变
// 量的值(下载速度、文件大小和下载时间)，显示小数点后面两位数字:
// At 18.12 megabits per second, a file of 2.20 megabytes
// download in 0.97 seconds.
#include <stdio.h>
int main(void)
{
	float megabits;
	float size;

	printf("What is the download speed(Mb/s)?\n");
	scanf("%f", &megabits);
	printf("What size file do you want to download(MB)?\n");
	scanf("%f", &size);
	printf("At %.2f megabits per second, a file of %.2f megabytes\n"
			"download in %.2f seconds.\n", megabits, size, size * 8.0 / megabits);

	return 0;
}
