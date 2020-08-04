/* 在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，
 * 1盎司等于2大汤勺，1大汤勺等于3茶勺。提示用户输入杯数，
 * 并以品脱、盎司、汤勺、茶勺为单位显示等价容量。 */

#include <stdio.h>
int main(void)
{
	float pint;
	float cup;
	float ounce;
	float big_spoon;
	float tea_spoon;

	printf("Please enter the number of cups: ");
	scanf("%f", &cup);

	printf("pints: %.2f\n", cup / 2);
	printf("ounces: %.2f\n", cup * 8);
	printf("big_spoons: %.2f\n", cup * 8 * 2);
	printf("tea_spoons: %.2f\n", cup * 8 * 2 * 3);

	return 0;
}
