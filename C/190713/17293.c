#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	int temp = N;

	while (N > 0)
	{
		if (N == 1)
		{
			printf("1 bottle of beer on the wall, 1 bottle of beer.\nTake one down and pass it around, no more bottles of beer on the wall.\n");
		}
		else if (N - 1 == 1)
		{
			printf("%d bottles of beer on the wall, %d bottles of beer.\nTake one down and pass it around, %d bottle of beer on the wall.\n", N, N, N - 1);
		}
		else
		{
			printf("%d bottles of beer on the wall, %d bottles of beer.\nTake one down and pass it around, %d bottles of beer on the wall.\n", N, N, N - 1);
		}

		N--;
		printf("\n");
	}

	if (temp != 1)
	{
		printf("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, %d bottles of beer on the wall.\n", temp);
	}
	else
	{
		printf("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, %d bottle of beer on the wall.\n", temp);
	}

	return 0;
}