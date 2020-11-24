/* 测试证实fgets()在输入时(在缓冲区时)无法使用EOF中断，即Ctrl-d. */
#include <stdio.h>
#define SIZE 10
int main(void)
{
	char words[SIZE];

	fgets(words, SIZE, stdin);
	puts(words);

	return 0;
}


/*
>>> Execution Result:
如果运行了程序，还未输入内容，可用Ctrl-d中断；
如果运行了程序，输入了内容，并且缓冲区内容未达到SIZE-1，输入两次Ctrl-d可中断;
运行时，输入了内容，缓冲区的内容大于等于SIZE-1时，输入一次Ctrl-d可中断。
如果使用了Ctrl-d而非Return或Enter，那么存储的不是'\n'(换行符)。
 */
