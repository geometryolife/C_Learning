/* bounds.c -- 数组下标越界 */
#include <stdio.h>
#define SIZE 4

int main(void)
{
	/* const int value1 = 44; */
	int value1 = 44;
	int arr[SIZE];
	/* const int value2 = 88; */
	int value2 = 88;
	int i;

	printf("value1 = %d, value2 = %d\n", value1, value2);
	for (i = -1; i <= SIZE; i++)
		arr[i] = 2 * i + 1;

	for (i = -1; i < 7; i++)
		printf("%2d %d\n", i, arr[i]);
	printf("value1 = %d, value2 = %d\n", value1, value2);
	printf("address of arr[-1]: %p\n", &arr[-1]);
	printf("address of arr[4]:  %p\n", &arr[4]);
	printf("address of value1:  %p\n", &value1);
	printf("address of value2:  %p\n", &value2);

	return 0;
}



/*
不同编译器输出的内容会不同，程序声明了arr数组大小应为4，即下标为0~3，
但由于第一个for循环的测试条件使用了等号，表达式语句在数组arr边界外赋
值，在arr[4]的地址上初始化了值，这个地址上的值是未被数组arr保护的。
详细测试:./tolearn/page243.c
>>> Execution Result:
value1 = 44, value2 = 88
-1 -1
 0 1
 1 3
 2 5
 3 7
 4 9
 5 32765
 6 1874458112
value1 = 44, value2 = 88
address of arr[-1]: 0x7ffdc984289c
address of arr[4]:  0x7ffdc98428b0
address of value1:  0x7ffdc9842894
address of value2:  0x7ffdc9842898
 */
