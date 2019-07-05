#include <stdio.h>

int change(int num)
{
	int temp;

	temp = num / 100 + (num % 100 / 10) * 10 + num % 10 * 100;
	
	return temp;
}


int main(void)
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	int temp1, temp2;
	
	temp1 = change(num1);
	temp2 = change(num2);

	if (temp1 > temp2)
		printf("%d\n", temp1);
	else
		printf("%d\n", temp2);

	return 0;
}