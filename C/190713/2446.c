#include <stdio.h>

int main(void)
{
	int N;

	scanf("%d", &N);

	int space = 0;
	int star = 2 * N - 1;



	while( star > 0)
	{		
		for (int j = 0; j < space; j++)
				printf(" ");
		for (int k = 0; k < star; k++)
				printf("*");
		printf("\n");
		
		space++;
		star -= 2;
	}

	space -= 2;
	star += 4;

	while (star <= 2 * N - 1)
	{
		for (int j = 0; j < space; j++)
			printf(" ");
		for (int k = 0; k < star; k++)
			printf("*");
		printf("\n");
		space--;
		star += 2;
	}


	return 0;
}