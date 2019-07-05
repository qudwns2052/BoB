#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];

	scanf("%s", str);
	int len = strlen(str);
	int cnt = 0;
	for (int i = 0; i < len; i++)
	{
		
		if (str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-'))
			i++;
		else if (str[i] == 'd')
		{
			if (str[i + 1] == '-')
				i++;
			else if (str[i + 1] == 'z' && str[i + 2] == '=')
				i += 2;
		}
		else if ((str[i] == 'l' || str[i] == 'n') && str[i + 1] == 'j')
			i++;
		else if ((str[i] == 's' || str[i] == 'z') && str[i + 1] == '=')
			i++;

		cnt++;
	}


	printf("%d\n", cnt);

	return 0;
}