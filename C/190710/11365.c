#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* str = (char*)malloc(sizeof(char) * 502);

	int len;

	while (1)
	{
		fgets(str, 502, stdin);

		len = strlen(str);

		str[len - 1] = '\0';

		len = strlen(str);

		if (strcmp(str, "END") == 0)
			break;

		
		for (int i = 0; i < len; i++)
		{
			printf("%c", str[len - i - 1]);
		}

		printf("\n");
	}



	return 0;
}