#include <stdio.h>

int Factorial(int n)
{
	if (n < 2)
		return 1;

	return n * Factorial(n - 1);
}

int main(void)
{
	int n;
	
	scanf("%d", &n);

	printf("%d\n", Factorial(n));

	return 0;
}