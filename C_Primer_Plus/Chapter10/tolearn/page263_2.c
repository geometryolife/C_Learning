/* 进行两级解引用时，导致赋值不安全 */
#include <stdio.h>
int main(void)
{
	const int ** pp2;
	int *p1;
	const int n = 13;

	/* 允许，但是这导致const限定符失效(根据第一行代码，不能通过**p2修
	改它所指向的内容) */
	pp2 = &p1;
	/* 有效，两者都声明为const，但是这将导致p1指向n(*pp2已被修改) */
	*pp2 = &n;
	/* 有效，但是这将改变n的值(但是根据声明n的代码，不能修改n的值) */
	*p1 = 10;
	printf("n = %d\n", *p1);

	return 0;
}
