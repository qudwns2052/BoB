#include <stdio.h>

int main(void)
{
	char str[4];
	int num1;
	int num2;
	int len;

	scanf("%d", &len);

	for (int i = 0; i < len; i++)
	{
		scanf("%s", str);

		num1 = str[0] - '0';

		num2 = str[2] - '0';

		printf("%d\n", num1 + num2);
	}

	return 0;
}