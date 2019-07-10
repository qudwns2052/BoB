#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len;

	scanf("%d", &len);

	
	int * arr = (int*)malloc(sizeof(int) * len);
	int * temp = (int*)malloc(sizeof(int) * len);
	int* temp2 = (int*)malloc(sizeof(int) * len);
	int* result = (int*)malloc(sizeof(int) * len);

	for (int i = 0; i < len; i++)
	{
		arr[i] = 0;
		temp[i] = 0;
		temp2[i] = 0;
		result[i] = 0;
	}
	


	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			scanf("%d", &arr[j]);
		}

		for (int j = 0; j < i + 1; j++)
		{
			if (j == 0)
			{
				arr[j] += temp[j];
			}
			else if (j == i)
			{
				arr[j] += temp[j - 1];
			}
			else
			{
				if (temp[j] > temp[j - 1])
					arr[j] += temp[j];
				else
					arr[j] += temp[j - 1];
				
			}
		}

		for (int j = 0; j < i + 1; j++)
		{
			result[j] = arr[j];
			temp[j] = result[j];
		}

	}

	int max = 0;

	for (int i = 0; i < len; i++)
	{
		if (max < result[i])
			max = result[i];

	}
	printf("%d\n", max);

	return 0;
}