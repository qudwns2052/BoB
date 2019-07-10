#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char* str[5];

	for (int i = 0; i < 5; i++)
		str[i] = (char*)malloc(sizeof(char) * 15);

	

	for (int i = 0; i < 5; i++)
	{
		scanf("%s", str[i]);
	}


	char* result = (char*)malloc(sizeof(char) * 100);

	int cnt = 0;

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (str[j][i] != NULL)
				result[cnt++] = str[j][i];
		}
	}

	result[cnt] = '\0';

	printf("%s\n", result);

	return 0;
}