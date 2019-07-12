#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len;

	scanf("%d", &len);

	int* arr = (int*)malloc(sizeof(int) * len);

	for (int i = 0; i < len; i++)
		scanf("%d", &arr[i]);

	int num;

	scanf("%d", &num);

	int cnt = 0;
	for (int i = 0; i < len; i++)
	{
		if (num == arr[i])
			cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}