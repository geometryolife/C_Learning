/* p_and_s.c -- 指针和字符串 */
#include <stdio.h>
int main(void)
{
	const char * mesg = "Don't be a fool!";
	const char * copy;

	copy = mesg;
	printf("%s\n", copy);
	printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
	printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

	return 0;
}


/*
>>> Execution Result:
Don't be a fool!
mesg = Don't be a fool!; &mesg = 0x7fffd64c0d88; value = 0x400680
copy = Don't be a fool!; &copy = 0x7fffd64c0d80; value = 0x400680
 */
