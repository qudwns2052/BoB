#include <stdio.h>

int main(void)
{
	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	int cnt = 1;
	for (int i = 1; i < 9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			cnt = i + 1;
		}
	}
	
	printf("%d\n%d\n", max, cnt);

	return 0;
}