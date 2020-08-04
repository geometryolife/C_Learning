#include <stdio.h>
int main(void)
{
	float num;
	float sum = 0.0f;

	while (scanf("%f", &num) == 1)
		sum = sum + num;
	printf("%f\n", sum);

	return 0;
}
