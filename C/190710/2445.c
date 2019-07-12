#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	int max = num * 2;

	int star;
	int nostar;

	star = 0;
	nostar = num;

	for (int i = 0; i < num - 1; i++)
	{
		star++;
		nostar--;

		for (int j = 0; j < star; j++)
			printf("*");
		for (int k = 0; k < nostar; k++)
			printf(" ");
		for (int k = 0; k < nostar; k++)
			printf(" ");
		for (int j = 0; j < star; j++)
			printf("*");
		
		printf("\n");

	}

	for (int i = 0; i < max; i++)
		printf("*");

	printf("\n");

	star = num;
	nostar = 0;

	for (int i = 0; i < num - 1; i++)
	{
		star--;
		nostar++;

		for (int j = 0; j < star; j++)
			printf("*");
		for (int k = 0; k < nostar; k++)
			printf(" ");
		for (int k = 0; k < nostar; k++)
			printf(" ");
		for (int j = 0; j < star; j++)
			printf("*");

		printf("\n");

	}



	return 0;
}