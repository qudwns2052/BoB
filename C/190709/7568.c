#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len;

	scanf("%d", &len);

	int** arr = (int**)malloc(sizeof(int*) * len);

	for (int i = 0; i < len; i++)
		arr[i] = (int*)malloc(sizeof(int) * 3);

	for (int i = 0; i < len; i++)
	{
		scanf("%d %d", &arr[i][0], &arr[i][1]);
		arr[i][2] = 0;
	
	}

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (i == j)
				continue;
			else if (arr[i][0] > arr[j][0] && arr[i][1] > arr[j][1])
				arr[j][2]++;
		}
	}

	for (int i = 0; i < len; i++)
		printf("%d ", arr[i][2] + 1);

	printf("\n");
	

	return 0;
}