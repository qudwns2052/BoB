#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);


	for (int i = 0; i < num; i++)
	{
		int a;
		char str[20];
		char temp[200];
		int cnt = 0;
		scanf("%d", &a);
		scanf("%s", str);

		int len = strlen(str);

		for (int j = 0; j < len; j++)
		{
			for (int k = 0; k < a; k++)
			{
				temp[cnt++] = str[j];
			}
		}
		temp[cnt] = '\0';
		printf("%s\n", temp);
	}


	return 0;
}