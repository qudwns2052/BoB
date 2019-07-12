#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* str1 = (char*)malloc(sizeof(char) * 1000);
	char* str2 = (char*)malloc(sizeof(char) * 1000);

	scanf("%s", str1);
	scanf("%s", str2);

	int len1 = strlen(str1);
	int len2 = strlen(str2);

	if (len1 < len2)
		printf("no\n");
	else
		printf("go\n");


	return 0;
}