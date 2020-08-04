// 提示用户输入旅行的里程和消耗的汽油量。然后计算并显示消
// 耗每加仑汽油行驶的英里数，显示小数点后面一位数字。接下来，
// 使用1加仑大约3.785升，1英里大约1.609千米，把单位是英里/加仑
// 的值转换为升/100公里(欧洲通用的燃料消耗表示法)，并显示结果，
// 显示小数点后面1位数字。注意，美国采用的方案测量消耗单位燃料
// 的行程(值越大越好)，而欧洲则采用单位距离消耗的燃料测量方
// 案(值越低越好)。使用#difine创建符号常量或使用const限定符
// 创建变量来表示两个转换系数。
#include <stdio.h>
int main(void)
{
	const float liter_per_gallon = 3.785;
	const float kilometers_per_mile = 1.609;
	float mileage, gas, k_km;

	// 提示输入一个行程的英里数
	printf("Please enter a mileage: ");
	scanf("%f", &mileage);
	printf("Please enter fuel consumption: ");
	scanf("%f", &gas);

	// 计算消耗每加仑汽油行驶的公里数
	printf("%.1f M/G\n", mileage / gas);

	// 把值转换成升/百公里
	k_km = (gas * liter_per_gallon) / (mileage * kilometers_per_mile / 100);
	printf("%.1f L/100KM\n", k_km);

	return 0;
}
