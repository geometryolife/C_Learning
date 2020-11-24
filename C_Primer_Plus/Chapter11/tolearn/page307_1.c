/* 使用strchr()代替s_gets()，修改程序11.28 format.c */
#include <stdio.h>
#include <string.h>
#define MAX 20
char * s_strchr(char * st, int n);

int main(void)
{
	char first[MAX];
	char last[MAX];
	char formal[2 * MAX + 10];
	double prize;

	puts("Enter your first name:");
	s_strchr(first, MAX);
	puts("Enter your last name:");
	s_strchr(last, MAX);
	puts("Enter your prize money:");
	scanf("%lf", &prize);
	sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
	puts(formal);

	return 0;
}

char * s_strchr(char * st, int n)
{
	char * find;
	
	fgets(st, n, stdin);
	find = strchr(st, '\n');
	if (find)
		*find = '\0';

	return find;
}
