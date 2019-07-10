#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len;

	scanf("%d", &len);

	int** arr = (int**)malloc(sizeof(int*) * len);


	for (int i = 0; i < len; i++)
		arr[i] = (int*)malloc(sizeof(int) * len);

	for (int i = 0; i < len; i++)
	{
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	
	int temp = 0;

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j][1] < arr[j + 1][1])
			{
				temp = arr[j][1];
				arr[j][1] = arr[j + 1][1];
				arr[j + 1][1] = temp;

				temp = arr[j][0];
				arr[j][0] = arr[j + 1][0];
				arr[j + 1][0] = temp;
			}
			else if (arr[j][1] == arr[j + 1][1])
			{
				if (arr[j][0] < arr[j + 1][0])
				{
					temp = arr[j][1];
					arr[j][1] = arr[j + 1][1];
					arr[j + 1][1] = temp;

					temp = arr[j][0];
					arr[j][0] = arr[j + 1][0];
					arr[j + 1][0] = temp;
				}
			}
		}
	}

	for (int i = len-1; i >=0; i--)
	{
		printf("%d %d\n", arr[i][0], arr[i][1]);
	}


	return 0;
}