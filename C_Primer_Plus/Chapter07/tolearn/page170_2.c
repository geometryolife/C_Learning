// skippart.c 的修改版本
// 优点:减少了continue的执行
#include <stdio.h>
int main(void)
{
	const float MIN = 0.0f;
	const float MAX = 100.0f;

	float score;
	float total = 0.0f;
	int n = 0;
	float min = MAX;
	float max = MIN;

	printf("Enter the float score (q to quit): ");
	while (scanf("%f", &score) == 1)
	{
		if (score >= MIN && score <= MAX)
		{
			printf("Accepting %.1f:\n", score);
			min = (score < min) ? score : min;
			max = (score > min) ? score : max;
			total += score;
			n++;
			printf("Enter next score (q to quit): ");
		}
		else
			printf("%.1f is an invalid value. Try again: ", score);
	}
	if (n > 0)
	{
		printf("Average of %d scores is %.1f\n", n, total / n);
		printf("low = %.1f, high = %.1f\n", min, max);
	}
	else
		printf("No valid scores wre entered.\n");

	return 0;
}
