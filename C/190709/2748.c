#include <stdio.h>



void Fibo(long long * arr, int n)
{
	for (int i = 2; i < n + 1; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
}

int main(void)
{
	long long arr[100];
	arr[0] = 0;
	arr[1] = 1;

	int num;

	scanf("%d", &num);

	Fibo(arr, num);

	for (int i = 0; i < num; i++)
		printf("%lld\n", arr[i]);

	printf("%lld\n", arr[num]);


	return 0;
}