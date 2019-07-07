#include <stdio.h>

int main(void)
{
	int num;
	int result;
	int sum = 0;
	int cnt = 0;

	scanf("%d %d", &num, &result);

	int* arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++)
		scanf("%d", &arr[i]);

	for (int i = num - 1; i >= 0; i--)
	{
		if (result == 0)
			break;
		else if (arr[i] > result)
			continue;
		else
		{
			cnt += result / arr[i];
			result %= arr[i];
		}

	}

	printf("%d\n", cnt);


	return 0;
}