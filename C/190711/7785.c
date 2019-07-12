#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct people
{
	char name[6];
	int here;
}People;

int main(void)
{
	int len;

	scanf("%d", &len);

	People * member = (People*)malloc(sizeof(People) * len);

	int num;
	char temp[6];
	char tname[6];

	for (int i = 0; i < len; i++)
	{
		

		scanf("%s", member[i].name);
		scanf("%s", temp);

		if (strcmp(temp, "enter") == 0)
			member[i].here = 1;
		else
			member[i].here = 0;
	}

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (strcmp(member[j].name, member[j + 1].name) > 0)
			{
				strcpy(temp, member[j].name);
				strcpy(member[j].name, member[j + 1].name);
				strcpy(member[j + 1].name, temp);

				num = member[j].here;
				member[j].here = member[j + 1].here;
				member[j + 1].here = num;
			}
			else if (strcmp(member[j].name, member[j + 1].name) == 0)
			{
				member[j].here = 0;
				member[j + 1].here = 1;
			}

		}
	}



	for (int i = len - 1; i >= 0; i--)
	{
		if (member[i].here == 1)
		{
			if (i > 0)
			{
				if (strcmp(member[i].name, member[i - 1].name) == 0)
				{
					continue;
				}
			}
			printf("%s\n", member[i].name);

		}
	}

	return 0;
}