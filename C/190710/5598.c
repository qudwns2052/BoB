#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* str = (char*)malloc(sizeof(char) * 1005);

	scanf("%s", str);

	int len = strlen(str);


	for (int i = 0; i < len; i++)
	{
		if (str[i] > 67)
		{
			str[i] -= 3;
		}
		else
		{
			str[i] = str[i] + 23;
		}
	}

	printf("%s\n", str);

	return 0;
}