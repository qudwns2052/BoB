#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str[20];

	scanf("%s", str);
	
	int len = strlen(str);

	int result = 0;

	for (int i = 0; i < len; i++)
	{
		if (str[i] < 'S')
			result += (str[i] - 'A') / 3 + 3;
		else
		{
			if (str[i] == 'S')
				result += 8;
			else if (str[i] < 'W')
				result += 9;
			else
				result += 10;
			
		}
	}

	printf("%d\n", result);


	return 0;
}