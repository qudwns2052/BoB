#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int num;

	scanf("%d", &num);

	int cnt = num;

	for (int i = 0; i < num; i++)
	{
		scanf("%s", str);

		int len = strlen(str);
		

		for (int j = 0; j < 26; j++)
		{
			int check1 = 0;
			int check2 = 0;
			int out = 0;


			for (int k = 0; k < len; k++)
			{

				if (str[k] == 'a' + j)
				{
					if (check2 == 1)
					{
						cnt--;
						out = 1;
						break;
					}
				
					check1 = 1;
				}
				else
				{
					if (check1 == 1)
						check2 = 1;
				}
			}

			if (out == 1)
				break;

		}
	}

	printf("%d\n", cnt);

	return 0;
}