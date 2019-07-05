#include <stdio.h>

int matrix[40] = { 1,1, };

int fibonacci(int n)
{
	if (n <= 1) return matrix[n];
	else
	{
		if (matrix[n] > 0) return matrix[n];
	}
	return matrix[n] = fibonacci(n - 1) + fibonacci(n - 2);
}


int main(void)
{
	int num;
	int len;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &len);

		if (len == 0)
			printf("1 0\n");
		else if (len == 1)
			printf("0 1\n");
		else
		{
			fibonacci(len);
			printf("%d %d\n", fibonacci(len - 2), fibonacci(len - 1));
		}
	}

	

	return 0;
}