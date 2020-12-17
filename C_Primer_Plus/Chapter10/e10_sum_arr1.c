/* sum_arr1.c -- 数组元素之和 */
/* 如果编译器不支持 %zd，用 %u 或 %lu 替代它 */
#include <stdio.h>
#define SIZE 10
int sum(int ar[], int n);

int main(void)
{
	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	long answer;

	answer = sum(marbles, SIZE);
	printf("The total number of marbles is %ld.\n", answer);
	printf("The size of marbles is %zd bytes.\n",
			sizeof marbles);

	return 0;
}

int sum(int ar[], int n)  // 这个数组的大小是?
{
	int i;
	int total = 0;

	for (i = 0; i < n; i++)
		total += ar[i];
	// 测试的系统用8字节存储地址，ar并不是数组本身，它是
	// 一个指向 marbles 数组首元素的指针
	printf("The size of ar is %zd bytes.\n", sizeof ar);

	return total;
}


/*
>>> Execution Result:
The size of ar is 8 bytes.
The total number of marbles is 190.
The size of marbles is 40 bytes.
 */
