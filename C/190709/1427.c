#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	int len = 0;
	int max;

	for (int i = 1; i < 1000000001; i = i * 10)
	{
		if (n / i != 0)
		{
			len++;
			max = i;
		}
	}

	if (len == 0)
	{
		printf("%d\n", n);
		return 0;
	}

	int* arr = (int*)malloc(sizeof(int) * len);

	for (int i = 0; i < len; i++)
	{
		arr[i] = n / max;
		n %= max;
		max /= 10;
	}

	int temp;

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < len; i++)
		printf("%d", arr[i]);

	printf("\n");

	return 0;
}