#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	int a;

	int cnt = 0;

	a = 64;

	while (1)
	{
		if (num / a == 1)
		{
			num %= a;
			cnt++;
		}

		if (a != 1)
			a /= 2;

		if (num == 1)
		{
			cnt++;
			break;
		}
		else if (num == 0)
			break;
	}

	printf("%d\n", cnt);

	return 0;
}