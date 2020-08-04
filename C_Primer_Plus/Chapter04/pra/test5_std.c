// 提示用户输入以兆位每秒(Mb/s)为单位的下载速度和以兆字节(MB)为单
// 位的文件大小。程序中应计算文件的下载时间。注意，这里1字节等于8
// 位。使用float类型，并用/作为除号。该程序要以下面的格式打印3个变
// 量的值(下载速度、文件大小和下载时间)，显示小数点后面两位数字:
// At 18.12 megabits per second, a file of 2.20 megabits
// download in 0.97 seconds.
#include <stdio.h>
int main(void)
{
	float speed, size, time;

	// 分别读取网络下载速度和文件大小，存入相应的变量中
	printf("Please input the net speed(megabits per second): ");
	scanf("%f", &speed);
	printf("Please input the file size(megabyte): ");
	scanf("%f", &size);
	// 计算下载时间，文件大小需要转换成兆字节
	time = size * 8 / speed;
	printf("At %.2f megabits per second, a file of %.2f megabytes dowload in %.f seconds.\n", speed, size, time);

	return 0;
}
