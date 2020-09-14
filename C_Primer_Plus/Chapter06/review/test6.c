#include <stdio.h>
#define ROWS 4
#define COLS 8
int main(void)
{
	const char ch = '$';

	int row, col;

	for (row = 0; row < ROWS; row++)
	{
		for (col = 0; col < COLS; col++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}


/*
>>> Execution Result:
$$$$$$$$
$$$$$$$$
$$$$$$$$
$$$$$$$$
 */
