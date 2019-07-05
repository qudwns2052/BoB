#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	int a1, a2;

	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &a1, &a2);
		printf("Case #%d: %d + %d = %d\n", i + 1, a1, a2, a1 + a2);
	}


	return 0;
}