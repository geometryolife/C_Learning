/* 把程序清单 11.9 中的fgets()换成get_s() */
#include <stdio.h>
#include <string.h>
char *gets_s(char * str, int num);
#define STLEN 10
int main(void)
{
	char words[STLEN];
	int i;

	puts("Enter strings (empty line to quit):");
	while (gets_s(words, STLEN) != NULL && words[0] != '\n')
	{
		i = 0;
		while (words[i] != '\n' && words[i] != '\0')
			i++;
		if (words[i] == '\n')
			words[i] = '\0';
		else  // 如果words[i] == '\0'则执行这部分代码
			while (getchar() != '\n')
				continue;
		puts(words);
	}
	puts("done");

	return 0;
}

char *gets_s(char * str, int num)
{
	char buffer[num];

	if (fgets(str, num, stdin) != 0)
	{
		size_t len = strlen(str);
		if (len > 0 && buffer[len - 1] == '\n')
			buffer[len - 1] = ' ';

		return buffer;
	}
	return 0;
}

/* 如果使用的编译器没有完全实现C11标准，那么就无法在标准库中使用 gets_s()
函数，不过可以简单实现一下 gets_s()函数。 */
/* 注: 函数定义尚存不足 */
