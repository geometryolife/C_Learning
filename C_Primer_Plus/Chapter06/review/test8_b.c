/* 假设用户输入的是Go west, young man!，下面各程序的输出的是什么?
(在 ASCII 码中，!紧跟在空格字符后面) */
#include <stdio.h>
int main(void)
{
	char ch;

	scanf("%c", &ch);
	while (ch != 'g')
	{
		printf("%c", ++ch);
		scanf("%c", &ch);
	}

	return 0;
}


/*
>>> Execution Result:
Hp!xftu-!zpvo
 */
