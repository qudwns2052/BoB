#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[1000000];

	scanf("%s", str);
	
	int len = strlen(str);

	int arr[26] = { 0, };


	for (int i = 0; i < len; i++)
	{
		char ch = 'A';
		for (int j = 0; j < 26; j++)
		{
			if (str[i] == (ch + j) || str[i] == (ch + j + 32))
				arr[j] += 1;
		}
	}

	int max = 0;
	char maxch;

	for (int i = 0; i < 26; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			maxch = 'A' + i;
		}
	}

	int cnt = 0;

	for (int i = 0; i < 26; i++)
	{
		if (max == arr[i])
			cnt++;
	}


	if (cnt > 1)
		printf("?\n");
	else
		printf("%c\n", maxch);



	return 0;
}