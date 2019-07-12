#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char* str1 = (char*)malloc(sizeof(char) * 100001);
	char* str2 = (char*)malloc(sizeof(char) * 100001);

	scanf("%s", str1);
	scanf("%s", str2);

	printf("%s", str1);

	int num1 = 0;
	int num2 = 0;

	int len1 = strlen(str1) - 1;
	int len2 = strlen(str2) - 1;

	int k;

	k = 1;
	for (int i = len1; i >= 0; i--)
	{
		if (str1[i] % 2 == 0)
			num1 += 0;
		else
			num1 += k;
		k *= 2;
	}


	k = 1;

	for (int i = len2; i >= 0; i--)
	{
		if (str2[i] % 2 == 0)
			num2 += 0;
		else
			num2 += k;
		k *= 2;
	}

	printf("%d %d\n", num1, num2);

	return 0;
}