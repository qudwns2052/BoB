#include <stdio.h>

int main(void)
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] = arr[i] % 42;
	}


	int cnt = 0;

	for (int i = 0; i < 42; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == arr[j])
			{
				cnt++;
				break;
			}
		}
	}


	return 0;
}