#include <stdio.h>

int main(void)
{
	int N, K;
	scanf("%d %d", &N, &K);

	int a = 1;
	int b = 1;

	

	for (int i = N; i > N - K; i--)
	{
		a *= i;
	}

	for (int i = K; i > 0; i--)
	{
		b *= i;
	}

	int result = a / b;

	printf("%d\n", result);

	return 0;
}