/* arrchar.c -- 指针数组，字符串数组 */
#include <stdio.h>
#define SLEN 41
#define LIM 5
int main(void)
{
	/* 指向字符串的指针数组 */
	const char * mytalents[LIM] = {
		"Adding numbers swiftly",
		"Multiplying accurately", "Stashing data",
		"Following instructions to the letter",
		"Understanding the C language"
	};
	/* char 类型数组的数组 */
	char yourtalents[LIM][SLEN] = {
		"Walking in a straight line",
		"Sleeping", "Watching television",
		"Mailing letters", "Reading email"
	};
	int i;

	puts("Let's compare talents.");
	printf("%-36s  %-25s\n", "My Talents", "Your Talents");
	for (i = 0; i < LIM; i++)
		printf("%-36s  %-25s\n", mytalents[i], yourtalents[i]);
	printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",
			sizeof(mytalents), sizeof(yourtalents));

	return 0;
}


/*
>>> Execution Result:
Let's compare talents.
My Talents                            Your Talents
Adding numbers swiftly                Walking in a straight line
Multiplying accurately                Sleeping
Stashing data                         Watching television
Following instructions to the letter  Mailing letters
Understanding the C language          Reading email

sizeof mytalents: 40, sizeof yourtalents: 205
 */

/* mytalents 数组是一个内含5个指针的数组，在我们的系统中，每个指针大小
是8个字节，共占40字节。yourtalents 是一个内含5个数组的数组，每个数组
内含41个char类型的值，共占205字节。虽然 mytalents[0] 和 yourtalents[0]
都分别表示一个字符串，但 mytalents 和 yourtalents 的类型并不相同。
mytalents 中的指针指向初始化时使用的字符串字面量的位置，这些字符串
字面量被存储在静态内存中；而 yourtalents 中的数组则存储着字面量的副本，
所以每个字符串都被存储了两次。 */
