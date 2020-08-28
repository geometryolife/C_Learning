/* fgets1.c -- 使用 fgets() 和 fputs() */
#include <stdio.h>
#define STLEN 14
int main(void)
{
	char words[STLEN];

	puts("Enter a string, please.");
	fgets(words, STLEN, stdin);
	printf("Your string twice (puts(), then fputs()):\n");
	puts(words);
	fputs(words, stdout);
	puts("Enter another string, please.");
	fgets(words, STLEN, stdin);
	printf("Your string twice (puts(), then fputs()):\n");
	puts(words);
	fputs(words, stdout);
	puts("Done.");

	return 0;
}

/*
Result:
Enter a string, please.
apple pie
Your string twice (puts(), then fputs()):
apple pie

apple pie
Enter another string, please.
strawberry shortcake
Your string twice (puts(), then fputs()):
strawberry sh
strawberry shDone.
 */
