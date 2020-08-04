// 提示用户输入旅行的里程和消耗的汽油量。然后计算并显示消
// 耗每加仑汽油行驶的英里数，显示小数点后面一位数字。接下来，
// 使用1加仑大约3.785升，1英里大约1.609千米，把单位是英里/加仑
// 的值转换为升/100公里(欧洲通用的燃料消耗表示法)，并显示结果，
// 显示小数点后面1位数字。注意，美国采用的方案测量消耗单位燃料
// 的行程(值越大越好)，而欧洲则采用单位距离消耗的燃料测量方
// 案(值越低越好)。使用#difine创建符号常量或使用const限定符
// 创建变量来表示两个转换系数。
#include <stdio.h>
// 使用 define 语句定义单位之间的换算
#define GALLON_TO_LITRE 3.785
#define MILE_TO_KM 1.609
int main(void)
{
	float range, oil;

	printf("Please input the range you traveled(in mile): ");
	// 以英里为单位读取旅行里程
	scanf("%f", &range);
	printf("Please input the oil you spend(in gallon): ");
	// 以加仑为单位读取消耗的汽油
	scanf("%f", &oil);
	// 打印USA的耗油量
	printf("In USA, your oil wear is %.1f M/G\n", range / oil);
	// 打印欧洲的耗油量
	printf("In Europe, your oil wear is %.1f L/100KM\n", (oil * GALLON_TO_LITRE) /
				(range * MILE_TO_KM / 100));

	return 0;
}
