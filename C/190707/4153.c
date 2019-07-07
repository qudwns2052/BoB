#include <stdio.h>

int main(void)
{
	int arr[3];

	int max;
	int maxidx;
	int sum;

	while (1)
	{
		max = 0;
		sum = 0;
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &arr[i]);
			if (max < arr[i])
			{
				max = arr[i];
				maxidx = i;
			}
		}

		if (max == 0)
			break;

		for (int i = 0; i < 3; i++)
		{
			if (i != maxidx)
				sum += arr[i] * arr[i];
		}

		if (sum == max * max)
			printf("right\n");
		else
			printf("wrong\n");


	}

	return 0;
}