#include <stdio.h>
#include <stdlib.h>

void Swap(float arr[], int a, int b)
{
	float temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

int Partition(float arr[], int left, int right)
{
	float pivot = arr[left];
	int low = left + 1;
	int high = right;

	while (low <= high) 
	{
		while (pivot >= arr[low] && low <= right) 
		{
			low++;
		}
		while (pivot <= arr[high] && high >= (left + 1))
		{
			high--;
		}
		if (low <= high)
		{
			Swap(arr, low, high);
		}
	}
	Swap(arr, left, high); 
	return high; 

}


void QuickSort(float arr[], int left, int right)
{
	if (left <= right)
	{
		int pivot = Partition(arr, left, right);
		QuickSort(arr, left, pivot - 1); 
		QuickSort(arr, pivot + 1, right); 
	}
}

int main(void)
{
	int num;
	
	scanf("%d", &num);

	float* arr = (float*)malloc(sizeof(float) * num);

	for (int i = 0; i < num; i++)
		scanf("%f", &arr[i]);

	QuickSort(arr, 0, num - 1);


	for (int i = 0; i < 7; i++)
		printf("%.3f\n", arr[i]);

	return 0;
}