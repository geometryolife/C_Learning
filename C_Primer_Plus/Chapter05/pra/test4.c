/* 编写一个程序，提示用户输入一个身高(单位: 厘米)，并分别以厘米和
 * 英尺、英寸为单位显示该值，允许有小数部分。程序应该能让用户重复
 * 输入身高，直到用户输入一个非正值。其输出示例如下:
 * Enter a height in centimeters: 182
 * 182.0 cm = 5 feet, 11.7 inches
 * Enter a height in centimeters (<=0 to quit): 168.7
 * 168.7 cm = 5 feet, 6.4 inches
 * Enter a height in centimeters (<=0 to quit): 0
 * Bye */

#include <stdio.h>
#define INCHES_PER_FEET 12
#define CM_PER_FEET 30.48
/* #define CM_PER_INCHES 2.54 */

int main(void)
{
	float height, inches, left;
	int feet;

	printf("Enter a height in centimeters: ");
	while ((scanf("%f", &height) != 0) && height != 0.0)
	{
		feet = (int) (height / CM_PER_FEET);
		left = (height / CM_PER_FEET) - feet;
		inches = left * INCHES_PER_FEET;
		printf("%.1f cm = %d feet(s), %.1f inches\n",
				height, feet, inches);
		printf("Enter a height in centimeters (<=0 to quit): ");
	}
	printf("Bye\n");

	return 0;
}
