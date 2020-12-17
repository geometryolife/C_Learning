#include <stdio.h>
#define SIZE 4

int main(void)
{
	int value1 = 44;
	int arr[SIZE];
	int value2 = 88;
	int i;

	printf("value1 = %d, value2 = %d\n", value1, value2);
	for (i = -2; i <= SIZE; i++)
		arr[i] = 2 * i + 1;

	for (i = -2; i < 7; i++)
		printf("%2d %d\n", i, arr[i]);
	printf("value1 = %d, value2 = %d\n", value1, value2);
	printf("address of arr[-2]: %p\n", &arr[-2]);
	printf("address of arr[-1]: %p\n", &arr[-1]);
	printf("address of arr[4]:  %p\n", &arr[4]);
	// Test
	printf("value of arr[-1]: %d\n", arr[-1]);
	printf("value of arr[4]: %d\n", arr[4]);
	// Test2 未初始化的地址存储垃圾值
	printf("address of arr[-5]: %p\n", &arr[-5]);
	printf("value of arr[-5]: %d\n", arr[-5]);
	printf("address of value1:  %p\n", &value1);
	printf("address of value2:  %p\n", &value2);

	return 0;
}


/*
在Test处:
Array index -1 is before the beginning of the array
Array index 4 is past the end of the array (which contains 4 elements)
即便现在能访问到arr数组边界外的数据元素，由于不被保护，所以其它程序可能
会修改&arr[2]、&arr[-1]和&arr[4]上的数据，编程中需要注意数组的边界。
>>> Execution Result:
value1 = 44, value2 = 88
-2 -3
-1 -1
 0 1
 1 3
 2 5
 3 7
 4 9
 5 32766
 6 -1768435968
value1 = 44, value2 = -3
address of arr[-2]: 0x7ffe8590a3a8
address of arr[-1]: 0x7ffe8590a3ac
address of arr[4]:  0x7ffe8590a3c0
value of arr[-1]: 7
value of arr[4]: 9
address of arr[-5]: 0x7ffe8590a39c
value of arr[-5]: 22085
address of value1:  0x7ffe8590a3a4
address of value2:  0x7ffe8590a3a8
 */
