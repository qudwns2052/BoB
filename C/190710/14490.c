#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* str = (char*)malloc(sizeof(char) * 22);

	scanf("%s", str);

	int i = 0;
	int alen = strlen(str);
	int slen;
	int flen = 0;
	
	while (str[i] != ':')
		i++;
	
	flen = i;
	slen = alen - flen - 1;

	char* sub = (char*)malloc(sizeof(char) * 22);
	char* sub2 = (char*)malloc(sizeof(char) * 22);

	int fnum;
	int snum;

	strncpy(sub, str, flen);

	fnum = atoi(sub);



	strncpy(sub2, str + flen + 1, slen);
	snum = atoi(sub2);
	


	int cnt;

	while (1)
	{
		cnt = 0;
		for (int i = 2; i < snum+1; i++)
		{
			if (fnum % i == 0 && snum % i == 0)
			{
				fnum /= i;
				snum /= i;
				cnt++;
				break;
			}
		}
		if (cnt == 0)
			break;

	}
	
	printf("%d:%d\n", fnum, snum);


	return 0;
}