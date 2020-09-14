/* Noah 先生喜欢以 2 计数，所以编写了下面程序，创建了一个存储 2、4、6、8
等数字的数组。这个程序是否有错误之处?如果有请指出。
#include <stdio.h>
#define SIZE 8
int main(void)
{
	int by_twos[SIZE];
	int index;

	for (index = 1; index <= SIZE; index++)
		by_twos[index] = 2 * index;
	for (index = 1; index <= SIZE; index++)
		printf("%d ", by_twos);
	printf("\n");

	return 0;
} */


#include <stdio.h>
#define SIZE 8
int main(void)
{
	int by_twos[SIZE];
	int index;

	for (index = 0; index < SIZE; index++)
		by_twos[index] = 2 * index;
	for (index = 0; index < SIZE; index++)
		printf("%d ", by_twos[index]);
	printf("\n");

	return 0;
}


/*
>>> Execution Result:
0 2 4 6 8 10 12 14
 */

/*
#include <stdio.h>
#define SIZE 8
int main(void)
{
	int by_twos[SIZE];
	int index;

	for (index = 1; index <= SIZE; index++)
		by_twos[index - 1] = 2 * index;
	for (index = 1; index <= SIZE; index++)
		printf("%d ", by_twos[index - 1]);
	printf("\n");

	return 0;
}
 */

/*
>>> Execution Result:
2 4 6 8 10 12 14 16
 */
