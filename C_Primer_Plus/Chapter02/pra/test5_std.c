// 练习5，通用型，会增加代码长度，但是能提供便利。
#include <stdio.h>
// 函数声明
int br(void);
int ic(void);
int main(void) {
	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf("\n");
	br();
	printf("\n");

	return 0;
}

int br(void) {
	printf("Brazil, Russia");
	return 0;
}

int ic(void) {
	printf("India, China");
	return 0;
}
