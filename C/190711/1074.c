#include <stdio.h>


int Recursive(int** arr, int a, int b, int cnt)
{
	int i;
	int j;

	for (i = a; i < 2; i++)
	{
		for (j = b; j < 2; j++)
		{
			arr[i][j] = cnt++;
		}
	}
	
	if()

	Recursive(arr,,,cnt)
}



int main(void)
{
	int N, r, c;

	scanf("%d %d %d", &N, &r, &c);

	int n = 1;

	for (int i = 0; i < N; i++)
	{
		n *= 2;
	}

	int** arr = (int**)malloc(sizeof(int*) * n);

	for (int i = 0; i < n; i++)
		arr[i] = (int*)malloc(sizeof(int) * n);



	return 0;
}