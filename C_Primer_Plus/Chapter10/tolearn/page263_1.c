/* 多重引用的例子 */
#include <stdio.h>
int main(void)
{
	int x = 20;
	const int y = 23;
	int  * p1 = &x;
	const int * p2 = &y;
	const int ** pp2;

	// Test
	printf("p1 = %p, *p1 = %d\n", p1, *p1);
	printf("p2 = %p, *p2 = %d\n", p2, *p2);

	p1 = p2;    // 不安全 -- 把const指针赋给非const指针
	p2 = p1;    // 有效 -- 把非const指针赋给const指针
	pp2 = &p1;  // 不安全 -- 嵌套指针类型赋值

	// Test
	printf("p1 = %p, *p1 = %d\n", p1, *p1);
	printf("p2 = %p, *p2 = %d\n", p2, *p2);
	printf("pp2 = %p, *pp2 = %d\n", pp2, **pp2);

	return 0;
}
