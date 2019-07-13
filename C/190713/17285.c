#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[105];

	scanf("%s", str);

	char ch = 'C';

	int num = ch & str[0];

	int i = 0;

	int len = strlen(str);

	char result[105];



	for (i = 0; i < result; i++)
	{
		result[i] = str[i] + num;
	}

	printf("%s\n", result);


	return 0;
}