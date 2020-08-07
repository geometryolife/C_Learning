// animals.c 的修改版本
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;

	printf("Give me a letter of the alphabet, and I will give ");
	printf("an animal name\nbeginning with that letter.\n");
	printf("Please type in a letter; type # to end my act.\n");
	// 要认真检查测试表达式的括号
	while ((ch = getchar()) != '#')
	{
		if ('\n' == ch)
			continue;
		ch = tolower(ch);  // 把大写字母转成小写字母
		/*printf("%c\n", ch);*/
		switch (ch)
		{
			case 'a':
				printf("argali, a wild sheep of Asia\n");
				break;
			case 'b':
				printf("babirusa, a wild pig of Malay\n");
				break;
			case 'c':
				printf("coati, racoon-like mammal\n");
				break;
			case 'd':
				printf("desman, aquatic, molelike critter\n");
				break;
			case 'e':
				printf("echidna, the spiny anteater\n");
				break;
			case 'f':
				printf("fisher, brownish marten\n");
				break;
			default:
				printf("That's a stumper!\n");
		}  // switch循环结束
		while (getchar() != '\n')
			continue;  // 跳过输入行的剩余部分
		printf("Please type another letter or a #.\n");
	}

	return 0;
}
