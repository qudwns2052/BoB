#include <stdio.h>

int main(void)
{
	int a1, a2;

	while (1)
	{
		scanf("%d %d", &a1, &a2);
		if (a1 == 0 && a2 == 0)
			break;
		printf("%d\n", a1 + a2);
	}


	return 0;
}