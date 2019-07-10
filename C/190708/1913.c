#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len;
	scanf("%d", &len);


	int** arr = (int**)malloc(sizeof(int*) * len);

	for (int i = 0; i < len; i++)
		arr[i] = (int*)malloc(sizeof(int) * len);

	int i = len / 2;
	int j = len / 2;
	int num = 1;

	arr[i][j] = num++;
	
	i--;

	int much = 2;
	int k;

	while (len > much)
	{

		for (k = 0; k < much; k++)
		{
			arr[i][j + k] = num;
			num++;
		}

		i++;
		j += much - 1;


		for (k = 0; k < much; k++)
		{
			arr[i + k][j] = num;

			num++;
		}

		i += much - 1;
		j--;

		for (k = 0; k < much; k++)
		{
			arr[i][j - k] = num;
			num++;
		}

		i--;
		j -= much - 1;
		

		for (k = 0; k < much; k++)
		{
			arr[i - k][j] = num;
			num++;
		}

		i -= much;
		much += 2;

	}


	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	scanf("%d", &num);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (num == arr[i][j])
				printf("%d %d\n", i + 1, j + 1);
		}
	}
	return 0;
}