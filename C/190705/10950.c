#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	int a1, a2;

	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &a1, &a2);
		printf("%d\n", a1 + a2);
	}


	return 0;
}