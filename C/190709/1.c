#include <stdio.h>

int main(void)
{
	char str[100];
	int num;

	fgets(str, 100, stdin);
	str[strlen(str) - 1] = '\0';
	




	printf("%s\n", str);

	return 0;
}