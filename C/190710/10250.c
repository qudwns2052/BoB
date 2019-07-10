#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	int h, w, n;

	int result;

	int temp;

	for (int k = 0; k < num; k++)
	{
		scanf("%d %d %d", &h, &w, &n);

		
		if (n % h == 0)
			result = 100 * h + n / h;
		else
			result = 100 * (n % h) + n / h + 1;
	

		printf("%d\n", result);


	}

	return 0;
}