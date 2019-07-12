#include <stdio.h>

int main(void)
{
	int arr1[6];
	int arr2[7];

	int score1[6] = { 1,2,3,3,4,10 };
	int score2[7] = { 1,2,2,2,3,5,10 };

	int len;

	int result1;
	int result2;

	scanf("%d", &len);

	for (int i = 0; i < len; i++)
	{
		result1 = 0;
		result2 = 0;

		for (int j = 0; j < 6; j++)
			scanf("%d", &arr1[j]);
		for (int k = 0; k < 7; k++)
			scanf("%d", &arr2[k]);

		for (int j = 0; j < 6; j++)
		{
			result1 += arr1[j] * score1[j];
		}

		for (int k = 0; k < 7; k++)
		{
			result2 += arr2[k] * score2[k];
		}

		if (result1 > result2)
			printf("Battle %d: Good triumphs over Evil\n", i+1);
		else if (result1 < result2)
			printf("Battle %d: Evil eradicates all trace of Good\n", i+1);
		else
			printf("Battle %d: No victor on this battle field\n", i+1);
	}

	return 0;
}