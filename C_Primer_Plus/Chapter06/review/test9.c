#include <stdio.h>
int main(void)
{
	int n, m;

	n = 30;
	while (++n <= 33)
		printf("%d|", n);

	n = 30;
	do
		printf("%d|", n);
	while (++n <= 33);

	printf("\n***\n");

	for (n = 1; n * n < 200; n += 4)
		printf("%d\n", n);

	printf("\n***\n");

	for (n = 2, m = 6; n < m; n *= 2, m += 2)
		printf("%d %d\n", n, m);

	printf("\n***\n");

	for (n = 5; n > 0; n--)
	{
		for (m = 0; m <= n; m++)
			printf("=");
		printf("\n");
	}

	return 0;
}


/*
>>> Execution Result:
31|32|33|30|31|32|33|
***
1
5
9
13

***
2 6
4 8
8 10

***
======
=====
====
===
==
 */
