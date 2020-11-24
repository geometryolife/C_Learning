/* copy1.c -- 演示 strcpy() */
#include <stdio.h>
#include <string.h>  /* strcpy()的函数原型在该头文件中 */
#define SIZE 40
#define LIM 5
char * s_gets(char * st, int n);

int main(void)
{
	char qwords[LIM][SIZE];
	char temp[SIZE];
	int i = 0;  /* 这里初始化是为了方便后面使用while循环 */

	printf("Enter %d words beginning with q:\n", LIM);
	while (i < LIM && s_gets(temp, SIZE))
	{
		if (temp[0] != 'q')
			printf("%s doesn't begin with q!\n", temp);
		else
		{
			strcpy(qwords[i], temp);
			i++;
		}
	}
	puts("Here are the words accepted:");
	/* for 语句特别适合用于需要初始化和更新的的循环 */
	for (i = 0; i < LIM; i++)  /* 利用for循环遍历qwords数组 */
		puts(qwords[i]);

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
Enter 5 words beginning with q:
quackery
quasar
quilt
quotient
no more
no more doesn't begin with q!
quiz
Here are the words accepted:
quackery
quasar
quilt
quotient
quiz
 */
