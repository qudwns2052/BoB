#include <stdio.h>

int main(void)
{
	int num;

	int one;
	int cnt;
	
	while (1)
	{
		scanf("%d", &num);

		if (num == 0)
			break;

		cnt = 1;

		while (num > 0)
		{
			one = num % 10;
			num /= 10;

			if (one == 1)
				cnt += 2;
			else if (one == 0)
				cnt += 4;
			else
				cnt += 3;

			cnt++;
		}

		printf("%d\n", cnt);

	}

	return 0;
}