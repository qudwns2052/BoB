#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	int x1, y1, x2, y2;
	
	int* arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d %d %d %d", x1, y1, x2, y2);
		arr[i] = (x2 - x1) * (y2 - y1);
	}


	return 0;
}