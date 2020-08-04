// 提示用户输入名和姓，以"名,姓"的格式打印出来。
#include <stdio.h>
int main(void)
{
	char fname[40];
	char lname[40];

	printf("Please enter your first name:\n");
	scanf("%s", fname);
	printf("Please enter your last name:\n");
	scanf("%s", lname);
	printf("Name: %s,%s\n", fname, lname);

	return 0;
}
