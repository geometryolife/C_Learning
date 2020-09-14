/* 编写一个函数，从标准输入中读取字符，直到遇到文件结尾。
程序要报告每个字符是否是字母。如果是，还要报告该字母
在字母表中的数值位置。例如，c 和 C 在字母表中的位置都
是3。合并一个函数，以一个字符作为参数，如果该字符是一
个字母则返回一个数值位置，否则返回-1。 */
#include <stdio.h>
#include <ctype.h>
#define NC -1
/* #define SIZE 40 */
void enter(void);
void enter_std(void);
int counter(char ch);
int main(void)
{
	/* enter_std(); */
	enter();

	return 0;
}

void enter(void)  /* 输入函数 */
{
	int ch;

	while ((ch = getchar()) != EOF)
	{
		if (!isalpha(ch))
			printf("%d\n", NC);
		else
			printf("%c %d\n", ch, counter(ch));
		/* putchar(ch); */
	}
}

void enter_std(void)  /* 标准输入函数 */
{
	char ch;

	printf("Please enter some characters:\n");
	while (scanf("%c", &ch) != EOF)
	{
		if (!isalpha(ch))
			printf("%d\n", NC);
		else
			printf("%c %d\n", ch, counter(ch));
		/* while (getchar() == '\n') */
			/* continue; */
	}
}

int counter(char ch)  /* 计数函数 */
{
	int i;
	char fc;  /* first cahracter */

	for (i = 1, fc = 'A'; fc < toupper(ch); fc++, i++)
		continue;

	return i;
}


