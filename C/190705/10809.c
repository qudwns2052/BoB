#include <stdio.h>

int main(void)
{
	char str[200] = { 0, };

	scanf("%s", str);

	int i, j;
	int same;

	for (j = 0; j < 26; j++)
	{
		same = 'a' + j;
		
		for (i = 0; i < 200; i++)
		{
			if (str[i] == same)
			{
				printf("%d ", i);
				break;
			}
		}

		if (i == 200)
			printf("-1 ");


	}

	printf("\n");

	return 0;
}