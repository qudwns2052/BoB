#include <stdio.h>

int main(void)
{
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);

	if (0 >= C - B)
		printf("-1\n");
	else
		printf("%d\n", A / (C - B) + 1);
	
	return 0;
}