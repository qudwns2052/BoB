#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	scanf("%d", &num);

	int* arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++)
		scanf("%d", &arr[i]);

	int temp;

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	int result = 0;

	for (int i = 0; i < num; i++)
	{
		result += arr[i] * (num - i);
	}

	printf("%d\n", result);

	return 0;
}