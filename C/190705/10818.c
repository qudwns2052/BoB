#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len;

	scanf("%d", &len);

	int * arr = (int*)malloc(sizeof(int) * len);

	if (arr == NULL)
		return -1;

	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	int max = arr[0];
	for (int i = 1; i < len; i++)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}

	printf("%d %d\n", min, max);

	return 0;
}