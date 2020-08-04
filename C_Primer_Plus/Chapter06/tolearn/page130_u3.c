// 用字符代替数字计
#include <stdio.h>
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		printf("The ASCII value for %c is %d.\n", ch, ch);

	return 0;
}
