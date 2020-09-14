// 创建一个包含26个元素的数组，并在其中存储26个小写字母。
// 打印数组的所有内容。
#include <stdio.h>
#define SIZE 26
int main(void)
{
	// 定义变量i为数组的下标，c从字符a开始递增，获取26个字母
	char alphabet[SIZE];
	int i;
	char c = 'a';

	// for 循环的循环更新部分，更新了下标和字母表
	for (i = 0; i < SIZE; i++, c++)
		alphabet[i] = c;
	for (i = 0; i <SIZE; i++)
		printf("%c ", alphabet[i]);
	printf("\n");

	return 0;
}


/*
>>> Execution Result:
a b c d e f g h i j k l m n o p q r s t u v w x y z
 */
