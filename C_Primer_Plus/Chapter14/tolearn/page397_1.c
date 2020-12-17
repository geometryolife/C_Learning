/* 把复合字面量作为函数的参数 */
#include <stdio.h>

struct rect {double x; double y;};
double rect_area(struct rect r) {return r.x * r.y;}

int main(void)
{
	double area;

	area = rect_area((struct rect) {10.5, 20.0});
	printf("%.2f\n", area);

	return 0;
}


/*
>>> Execution Result:
210.00
 */
