/* 改编binary.c让其测试十进制数 */
#include <stdio.h>
void to_decimal(unsigned long n);

int main(void)
{
	unsigned long number;
	printf("Enter an integer (q to quit):\n");
	while (scanf("%lu", &number) == 1)
	{
		printf("Binary equivalent: ");
		to_decimal(number);
		putchar('\n');
		printf("Enter an integer (q to quit):\n");
	}
	printf("Done.\n");

	return 0;
}

void to_decimal(unsigned long n)
{
	int r;

	r = n % 10;
	if (n >= 10)
		to_decimal(n / 10);
	switch (r)
	{
		case 0:
			putchar('0');
			break;
		case 1:
			putchar('1');
			break;
		case 2:
			putchar('2');
			break;
		case 3:
			putchar('3');
			break;
		case 4:
			putchar('4');
			break;
		case 5:
			putchar('5');
			break;
		case 6:
			putchar('6');
			break;
		case 7:
			putchar('7');
			break;
		case 8:
			putchar('8');
			break;
		default:
			putchar('9');
	}

	return;
}
