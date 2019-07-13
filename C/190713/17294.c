#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* str = (char*)malloc(sizeof(char) * 20);

	scanf("%s", str);

	int len = strlen(str);

	int result = 1;

	if (len < 3)
	{
		printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!\n");
		return 0;
	}
	int* arr = (int*)malloc(sizeof(int) * len);

	for (int i = 0; i < len; i++)
	{
		arr[i] = str[i] - '0';
	}

	int a = arr[1] - arr[0];

	for (int i = 0; i < len - 1; i++)
	{
		if (arr[i + 1] - arr[i] == a)
			continue;
		else
		{
			result = 0;
			break;
		}
	}

	if (result == 1)
	{
		printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!\n");
	}
	else
	{
		printf("흥칫뿡!! <(￣ ﹌ ￣)>\n");
	}

	return 0;
}