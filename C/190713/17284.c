#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	
	int n;

	int result = 0;

	do
	{
		scanf("%d", &n);
		if (n == 1)
			result += 500;
		else if (n == 2)
			result += 800;
		else
			result += 1000;
	} while (getc(stdin) == ' ');


	printf("%d\n", 5000 - result);


	return 0;
}