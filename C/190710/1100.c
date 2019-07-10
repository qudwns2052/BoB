#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char** str = (char**)malloc(sizeof(char*) * 8);

	for (int i = 0; i < 8; i++)
		str[i] = (char*)malloc(sizeof(char) * 10);

	for (int i = 0; i < 8; i++)
	{
		scanf("%s", str[i]);
	}

	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (i % 2 == 0 && j % 2 == 0 && str[i][j] == 'F')
				cnt++;
			else if (i % 2 == 1 && j % 2 == 1 && str[i][j] == 'F')
				cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}