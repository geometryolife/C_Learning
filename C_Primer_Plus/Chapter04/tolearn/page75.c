// 学以致用
#include <stdio.h>
#define NAME "Marks"

int main(void)
{
	char name[40] = NAME;
	float cash = 350.27;

	printf("The %s family just may be $%.2f dollars richer!\n", name, cash);

	return 0;
}
