/* zippo1.c -- zippo 的相关信息 */
#include <stdio.h>
int main(void)
{
	int zippo[4][2] = { { 2, 4 }, { 6, 8 }, { 1, 3 }, { 5, 7 } };

	printf("   zippo = %p,    zippo + 1 = %p\n", zippo, zippo + 1);
	printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
	printf("  *zippo = %p,   *zippo + 1 = %p\n", *zippo, *zippo + 1);
	printf("zippo[0][0] = %d\n", zippo[0][0]);
	printf("  *zippo[0] = %d\n", *zippo[0]);
	printf("    **zippo = %d\n", **zippo);
	printf("        zippo[2][1] = %d\n", zippo[2][1]);
	printf("*(*(zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1));

	return 0;
}

/*
运行结果:
   zippo = 0x7ffd5612cbb0,    zippo + 1 = 0x7ffd5612cbb8
zippo[0] = 0x7ffd5612cbb0, zippo[0] + 1 = 0x7ffd5612cbb4
  *zippo = 0x7ffd5612cbb0,   *zippo + 1 = 0x7ffd5612cbb4
zippo[0][0] = 2
  *zippo[0] = 2
    **zippo = 2
        zippo[2][1] = 3
*(*(zippo + 2) + 1) = 3
*/
