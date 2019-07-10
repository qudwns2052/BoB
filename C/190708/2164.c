#include <stdio.h>
#define SIZE 1000000

int rear = 0;
int front = 0;

void InsertQ(int * arr, int data)
{
	arr[rear++] = data;
}

int DeleteQ(int* arr)
{
	return arr[front++];
}


int main(void)
{
	int* arr = (int*)malloc(sizeof(int) * SIZE);

	int len;

	scanf("%d", &len);

	rear = len;

	for (int i = 0; i < len; i++)
	{
		arr[i] = i + 1;
	}

	int temp;

	while (front + 1 != rear)
	{
		DeleteQ(arr);
		
		temp = DeleteQ(arr);

		InsertQ(arr, temp);
	}

	temp = DeleteQ(arr);

	printf("%d\n", temp);



	return 0;
}