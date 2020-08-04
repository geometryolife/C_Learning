#include <stdio.h>
#define RATE 2.54

int main(void)
{
	float height_cm;
	float height_inch;

	printf("Please enter your height in inch: ");
	scanf("%f", &height_inch);
	height_cm = height_inch * RATE;
	printf("Oh! Your height in centimetre are %.2fcm\n", height_cm);

	return 0;
}
