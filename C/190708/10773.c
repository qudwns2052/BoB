#include <stdio.h>
#define SIZE 100000

int stack[SIZE];
int top = -1;

void Push(int data)
{
	if (top + 1 == SIZE)
		return;

	stack[++top] = data;
}

int Pop(void)
{
	if (top == -1)
		return;

	return stack[top--];
}

int main(void)
{
	int len;

	scanf("%d", &len);

	int num;
	int sum = 0;

	for (int i = 0; i < len; i++)
	{
		scanf("%d", &num);
		if (num == 0)
			sum -= Pop();
		else
		{
			Push(num);
		}

		sum += num;
	}

	printf("%d", sum);

	return 0;
}