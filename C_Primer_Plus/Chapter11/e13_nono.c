/* nono.c -- 千万不要模仿! */
#include <stdio.h>
int main(void)
{
	char side_a[] = "Side A";
	char dont[] = { 'W', 'O', 'W', '!' };
	char side_b[] = "Side_B";

	/* puts(side_b); */
	puts(dont);  /* dont 不是一个字符串 */
	/* puts(side_a); */

	return 0;
}


/*
若删除side_a和side_b两个数组，会遇到如下情况:
通常内存中有许多空白字符，幸运的话，puts()很快就能找到一个，但是这样不靠谱。
>>> Execution Result:
WOW!
 */
