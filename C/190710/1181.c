#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	char* temp = (char*)malloc(sizeof(char) * 55);
	temp = NULL;

	int num;

	scanf("%d", &num);

	char** str = (char**)malloc(sizeof(char*) * num);

	for (int i = 0; i < num; i++)
		str[i] = (char*)malloc(sizeof(char) * 55);


	for (int i = 0; i < num; i++)
	{
		scanf("%s", str[i]);
	}

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (strlen(str[j]) > strlen(str[j + 1]))
			{
				memcpy(temp, str[j], strlen(str[j]));
				memcpy(str[j], str[j + 1], strlen(str[j + 1]));
				memcpy(str[j + 1], temp, strlen(temp));
			}
			else if (strlen(str[j]) == strlen(str[j + 1]))
			{
				if (strcmp(str[j], str[j + 1]) > 0)
				{
					memcpy(temp, str[j], strlen(str[j]));
					memcpy(str[j], str[j + 1], strlen(str[j + 1]));
					memcpy(str[j + 1], temp, strlen(temp));
				}
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		if (strcmp(str[i], str[i + 1]) == 0)
			i++;
		printf("%s\n", str[i]);
	}


	return 0;
}