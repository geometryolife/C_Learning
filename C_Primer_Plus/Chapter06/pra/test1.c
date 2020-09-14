// 创建一个包含26个元素的数组，并在其中存储26个小写字母。
// 打印数组的所有内容。
#include <stdio.h>
#define SIZE 26
int main(void)
{
	char chs[SIZE];
	char ch = 'a';
	int i;

	for (i = 0; i < SIZE; i++, ch++)
		chs[i] = ch;
	for (i = 0; i < SIZE; i++)
		printf("%2c", chs[i]);
	printf("\n");

	return 0;
}


/*
>>> Execution Result:
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 */
