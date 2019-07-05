#include <stdio.h>

int main(void)
{
	int num1;
	int num2;

	int a1, a2, a3;

	scanf("%d", &num1);
	scanf("%d", &num2);
	
	a1 = num2 / 100;
	a2 = num2 % 100 / 10;
	a3 = num2 % 10;

	printf("%d\n", a3 * num1);
	printf("%d\n", a2 * num1);
	printf("%d\n", a1 * num1);
	printf("%d\n", num1 * num2);


	return 0;
}