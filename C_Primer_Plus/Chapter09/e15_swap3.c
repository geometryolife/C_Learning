/* swap3.c -- 使用指针解决交换函数的问题 */
#include <stdio.h>
void interchange(int * u, int * v);

int main(void)
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y);  // 把地址发给函数
	printf("Now x = %d and y = %d.\n", x, y);

	// 查看x和y的地址
	printf("\nx's address: %p\n", &x);
	printf("y's address: %p\n", &y);

	return 0;
}

void interchange(int * u, int * v)
{
	int temp;

	temp = *u;  // temp 获得u所指向对象的值
	*u = *v;
	*v = temp;

	// 查指针u和v的地址、值
	printf("\nu's address of pointer: %p\n", &u);
	printf("v's address of pointer: %p\n", &v);
	printf("u's value of pointer: %p\n", u);
	printf("v's value of pointer: %p\n", v);
}
