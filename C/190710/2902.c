#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* str = (char*)malloc(sizeof(char) * 102);

	scanf("%s", str);

	char* result = (char*)malloc(sizeof(char) * 102);

	int cnt = 0;

	int i = 1;

	result[cnt++] = str[0];

	while (str[i] != '\0')
	{
		if (str[i] == '-')
			result[cnt++] = str[i + 1];
		i++;

	}

	result[cnt] = '\0';

	printf("%s\n", result);


	return 0;
}