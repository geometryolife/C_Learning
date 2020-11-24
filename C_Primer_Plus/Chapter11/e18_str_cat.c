/* str_cat_cat.c -- 拼接两个字符串 */
#include <stdio.h>
#include <string.h>  /* strcat()函数的原型在该头文件中 */
#define SIZE 80
char *s_gets(char * st, int n);
int main(void)
{
	char flower[SIZE];
	char addon[] = "s smell like old shoes.";

	puts("What is your favorite flower?");
	if (s_gets(flower, SIZE))
	{
		strcat(flower, addon);
		puts(flower);
		puts(addon);
	}
	else
		puts("End of file encountered!");
	puts("bye");

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}


/*
>>> Execution Result:
What is your favorite flower?
wonderflower
wonderflowers smell like old shoes.
s smell like old shoes.
bye
 */

/*
如果接收到EOF，则打印如下结果
>>> Execution Result:
What is your favorite flower?
End of file encountered!
bye
 */
