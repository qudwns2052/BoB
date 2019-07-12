#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int len;

	scanf("%d", &len);

	char* str = (char*)malloc(sizeof(char) * 65);

	int lenlen;
	
	char num;


	for (int i = 0; i < len; i++)
	{
		scanf("%s", str);
		lenlen = strlen(str);

		num = str[lenlen - 1];

		if (num % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");


	}


	return 0;
}