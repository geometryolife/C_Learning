/* 观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况 */
#include <stdio.h>
int main(void)
{
	int i = 214748364700;
	float f = 3.4E38;
	float f2 = 3.4E-38;

	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(float));

	// 处理整数上溢
	int toobigi = i * 100;
	printf("int_over = %d\n", toobigi);
	
	// 处理浮点数上溢
	float toobigf = f * 100.0f;
	printf("float_over = %e\n", toobigf);

	// 处理浮点数下溢
	float toosmallf = f2 / 10;
	printf("%e\n%e\n", f2, toosmallf);

	return 0;
}
