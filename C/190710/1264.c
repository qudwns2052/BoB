#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* str = (char*)malloc(sizeof(char) * 256);
	int i;
	int cnt;
	while (1)
	{
		fgets(str, 256, stdin);

		if (strcmp(str, "#") == 0)
			break;

		i = 0;
		cnt = 0;
		while (str[i] != '\0')
		{
			if (str[i] == 'a' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'e'
				|| str[i] == 'A' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'E')
				cnt++;
		}

		printf("%d\n", cnt);
	}

	free(str);



	return 0;
}