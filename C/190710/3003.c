#include <stdio.h>

int main(void)
{
	int arr[6];
	int arr2[6] = { 1,1,2,2,2,8 };
	int result[6];

	for (int i = 0; i < 6; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] < 0)
		{
			result[i] = arr[i];
		}
		else
		{
			result[i] = arr2[i] - arr[i];
		}
	}

	for (int i = 0; i < 6; i++)
	{
		printf("%d ", result[i]);
	}

	printf("\n");
	
	return 0;
}