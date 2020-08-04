/* 1个水分子的质量约为3.0e-23。1夸脱水大约是950克。提示用户输入水的夸脱数，并显示水分子的数量 */
#include <stdio.h>
int main(void)
{
	float quart;
	float weight;
	float counts;

	printf("Please enter the quart number of water: ");
	//scanf("%f\n", &quart);
	scanf("%f", &quart);
	weight = 950 * quart;
	counts = weight / 3.0e-23;
	printf("%f\n", weight);
	printf("%f\n", counts);

	return 0;
}
