#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y;

	scanf("%d %d", &x, &y);

	int** arr = (int**)malloc(sizeof(int*) * x);
	
	for (int i = 0; i < x; i++)
		arr[i] = (int*)malloc(sizeof(int) * y);

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	int len;

	scanf("%d", &len);

	int a1, b1, a2, b2;

	int result;

	for (int k = 0; k < len; k++)
	{
		scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
	
		result = 0;

		for (int i = b1 - 1; i < b2; i++)
		{
			if (i + 1 == b2)
			{
				for (int j = a1 - 1; j < a2; j++)
					result += arr[j][i];
			}
			else if (i + 1 == b1)
			{
				for (int j = a1 - 1; j < x; j++)
					result += arr[j][i];
			}
			else
			{
				for (int j = 0; j < x; j++)
					result += arr[j][i];
			}
		}
		
		printf("%d\n", result);

	}

	return 0;
}