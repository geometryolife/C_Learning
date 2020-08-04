/* 调用两个自定义函数br()和ic() */
#include <stdio.h>
void br(void);
void ic(void);

int main(void)
{
	br();
	ic();
	printf("India, China\n");
	printf("Brazil, Russia\n");
}

void br(void)
{
	printf("Brazil, Russia, ");
}
void ic(void)
{
	printf("India, China\n");
}
