#include <stdio.h>

int main(void)
{
	int A, B, V;

	scanf("%d %d %d", &A, &B, &V);

	int day;

	day = (V - B) / (A - B);

	if ((V - B) % (A - B) != 0)
		day++;

	printf("%d\n", day);

	return 0;
}