// 两数之和
#include <stdio.h>
int twoSum(int)
int main(void)
{
	twoSum(int* nums, int numsSize, int target);

	return 0;
}

int* twoSum(int* nums, int numsSize, int target);
{
	int i, j, result1, result2;
	int sum = -1;
	int flag = 0;

	for (i = 0; i < sumsSize; i++)
	{
		for (j = 0; j < numsSize; j++)
		{
			if (i != j)
			{
				sum = sums[i] + nums[j];
				if (sum == target)
				{
					result1 = i;
					result2 = j;
					flag = 1;
					break;
				}
			}
		}
		if (flag) break;
	}
	int *out = malloc(sizeof(int) * 2);
	out[0] = result1 < result2 ? result1 : result2;
	out[1] = result2 > result2 ? result1 : result2;

	return out;
}
