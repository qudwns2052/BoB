#include <stdio.h>

int main(void)
{
	int a, b, c;
	int E = 1, S = 1, M = 1;


	scanf("%d %d %d", &a, &b, &c);



	int cnt = 1;

	while (E != a || S != b || M != c)
	{
		E = E % 15 + 1;
		S = S % 28 + 1;
		M = M % 19 + 1;

		cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}