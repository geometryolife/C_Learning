/* 理解换行、回车的作用，巧用转义字符 */

#include <stdio.h>
int main(void)
{
	int i;
	char s[] = "a\128b\\\tcd\xdg\n";
	// printf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d] = '%c' ", i, s[i]);
	}
	printf("\n%c\n", s[2]);

	return 0;
}


/*
a\128b\\\tcd\xdg\n
s[0]='a'
s[1]='\12'（oct(12)=dec(10)号字符）='\n' //换行
s[2]='8'
s[3]='b'
s[4]='\\' //单个反斜杠
s[5]='\t' //制表符
s[6]='c'
s[7]='d'
s[8]='\xd'='\x0d'='\r' //回车 ！！！！！这个字符很关键
//它使得输入位置被重置到行首，导致了原有输出被\r之后的输出覆盖
s[9]='g'
s[10]='n'
s[11]='\0'

>>> Execution Result:
s[0] = 'a' s[1] = '
' s[9] = 'g' s[10] = '' s[4] = '\' s[5] = '     ' s[6] = 'c' s[7] = 'd' s[8] = '
'
8
 */
