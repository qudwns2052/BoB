#include <stdio.h>

int main(void)
{
	int row, col;
	scanf("%d %d", &row, &col);

	int** arr1 = (int**)malloc(sizeof(int*) * row);


	for (int i = 0; i < row; i++)
		arr1[i] = (int*)malloc(sizeof(int) * col);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			scanf("%d", &arr1[i][j]);
	}

	int findex = row;


	scanf("%d %d", &row, &col);

	int sindex = col;
	int tindex = row;


	int** arr2 = (int**)malloc(sizeof(int*) * row);


	for (int i = 0; i < row; i++)
		arr2[i] = (int*)malloc(sizeof(int) * col);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			scanf("%d", &arr2[i][j]);
	}

	
	int** arr3 = (int**)malloc(sizeof(int*) * findex);

	for (int i = 0; i < findex; i++)
		arr3[i] = (int*)malloc(sizeof(int) * sindex);

	for (int i = 0; i < findex; i++)
	{
		for (int j = 0; j < sindex; j++)
		{
			arr3[i][j] = 0;
		}
	}
	

	for (int i = 0; i < findex; i++)
	{
		for (int j = 0; j < sindex; j++)
		{
			for (int k = 0; k < tindex; k++)
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}

	for (int i = 0; i < findex; i++)
	{
		for (int j = 0; j < sindex; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}

	return 0;
}