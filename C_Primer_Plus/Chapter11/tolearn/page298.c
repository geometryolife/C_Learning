/* 修改程序程序清单11.21 compare.c 让其输入的答案忽略大小写，如果输入
的答案不正确，会告知用户。*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ANSWER "GRANT"
#define SIZE 40

char put1(const char * string);
char * s_gets(char *, int);
char * s_gets2(char *, int);

int main(void)
{
	char ch;
	char try[SIZE];
	/* char ans; */
	/* int i; */

	puts("Who is buried in Grant's tomb?");
	/* s_gets(try, SIZE); */
	/* put1("good"); */

	/* put1(try); */
	while ((ch = *try) != '\n')
	{
		ch = toupper(ch);
		putchar(ch);
	}
	/* while (strcmp(try, ANSWER)) */
	/* { */
		/* puts("No, that's wrong. Try again."); */
		/* s_gets2(try, SIZE); */
	/* } */
	/* puts("That's right!"); */

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (*st != '\n' && *st != '\0')
			st++;
		if (*st == '\n')
			*st = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}

char put1(const char * string)
{
	char ch;
	
	while (*string)
	{
		ch = toupper(putchar(*string++));
	}

	return ch;
}


/* 
char * s_gets2(char * st, int n)
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
} */
