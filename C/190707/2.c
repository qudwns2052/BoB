#include <stdio.h>
int stack[10];
int top = -1;
void Push(int data) {
	stack[++top] = data;
}
int Pop(void) {
	return stack[top--];
}
int main(void)
{
	int i;
	for (i = 0; i < 5; i++) {
		Push(i);
	}
		for (i = 0; i < 5; i++) {
			printf("%d\n", Pop());
		}
	

	return 0;
}