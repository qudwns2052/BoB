#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	int result1 = 0, result2 = 0;

	for (int i = b; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			result1 = i;
			break;
		}
	}

	
	result2 = a * b / result1;


	printf("%d\n%d\n", result1, result2);


	return 0;
}