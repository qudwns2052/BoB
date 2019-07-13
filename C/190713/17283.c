#include <stdio.h>

int main(void)
{
	int N, R;

	scanf("%d", &N);
	scanf("%d", &R);

	long result = 0;
	int cnt = 1;
	long len;

	while (1)
	{
		len = N * R / 100;
		if (len <= 5)
			break;
		cnt *= 2;

		result += cnt * len;
		
		N = len;
	}

	printf("%d\n", result);


	return 0;
}