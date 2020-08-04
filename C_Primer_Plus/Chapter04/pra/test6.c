// 先提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，
// 下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐。
// Melissa Honeybee
//       7        8
// 接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐。
// Melissa Honeybee
// 7       8
#include <stdio.h>
#include <string.h>
int main(void)
{
	char fname[40], lname[40];
	int flength, llength;

	printf("Please input your first name: ");
	scanf("%s", fname);
	printf("Please input your first name: ");
	scanf("%s", lname);

	flength = strlen(fname);
	llength = strlen(lname);

	printf("%s %s\n", fname, lname);
	printf("%*d %*d\n", flength, flength, llength, llength);

	printf("%s %s\n", fname, lname);
	printf("%-*d %-*d\n", flength, flength, llength, llength);

	return 0;
}
