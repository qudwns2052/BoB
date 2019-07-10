#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	int a, b;

	int temp;
	int result;

	for (int k = 0; k < num; k++)
	{
		scanf("%d", &a);
		scanf("%d", &b);

		int* arr = (int*)malloc(sizeof(int) * b);
	

		for (int i = 0; i < b; i++)
		{
			arr[i] = i + 1;
		}


		
		for (int i = 0; i < a; i++)
		{
			temp = 0;
			for (int j = 0; j < b; j++)
			{
				temp += arr[j];
				arr[j] = temp;
				
			}
		}

		printf("%d\n", arr[b - 1]);
	}


	return 0;
}