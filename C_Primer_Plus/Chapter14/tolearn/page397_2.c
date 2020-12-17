/* 传递复合字面量的地址给函数 */
#include <stdio.h>

struct rect {double x; double y;};
double rect_areap(struct rect * rp) {return rp->x * rp->y;}

int main(void)
{
	double area;

	area = rect_areap( &(struct rect) {10.5, 20.0});
	printf("%.2f\n", area);

	return 0;
}


/*
>>> Execution Result:
210.00
 */
