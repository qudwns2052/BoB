#include <stdio.h>

int main(void)
{
	int num;
	int cnt;

	while (1)
	{
		scanf("%d", &num);

		if (num == 0)
			break;
		else if (num == 1)
		{
			printf("1\n");
			continue;
		}
		cnt = 0;

		for (int i = num + 1; i <= 2 * num; i++)
		{
			if (i % 2 != 0)
			{
				for (int j = 3; j * j <= i; j += 2)
				{
					if (i % j == 0)
					{
						cnt--;
						break;
					}
				}
				cnt++;
			}

		}

		printf("%d\n", cnt);
	}

	return 0;
}