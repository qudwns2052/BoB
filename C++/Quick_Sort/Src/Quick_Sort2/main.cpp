#include "stdafx.h"

#define ERROR_BIG_NUMBER	1000000

void Swap(std::vector<int> & arr, int idx1, int idx2)	// 2, 3��°�� ���޵Ǵ� �ε����� ���� �������ִ� �Լ�
{
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int Partition(std::vector<int>& arr, int left, int right)
{
	int pivot = arr[left];	// pivot�� ���� ���� �ε����� ���� ������ ��´�.
	int low = left + 1;	//pivot�� ������ ���� ���� �ε����� low�� ��´�.
	int high = right;	//pivot�� ������ ���� ������ �ε����� higt�� ��´�.
	while (low <= high)
	{
		while (pivot >= arr[low] && low <= right)	//pivot���� low�ε����� ���� ���� �۰�, low�� ������ �ε������� ���� ������ low�� �ø���.
			low++;
		while (pivot <= arr[high] && high >= left + 1) //pivot���� high�ε����� ���� ���� ũ��, low�� pivot �ε����� ������ ù��° �ε������� Ŭ ������ low�� �ø���.
			high--;

		if (low <= high)	// low�� high���� ������ ���� �����Ѵ�.
			Swap(arr, low, high);

	}

	Swap(arr, left, high);	//high �ε����� �ִ� ���� ���� �ᱹ pivot���� �۰ų� �����Ƿ�, pivot�� high �ε����� ���Ͱ��� �����Ѵ�.
	// �� �Լ��� ���� pivot ������ pivot���� ���� ��, �������� pivot���� ū ������ ���ĵȴ�.
	return high;
}

void InsertSort(std::vector<int>& arr, int left, int right)
{
	for (int i = left + 1; i < right; i++)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= left && key < arr[j])
		{
			Swap(arr, i, j);
			j--;
		}
		arr[j + 1] = key;
	}
}

void QuickSort(std::vector<int>& arr, int left, int right)
{
	if (right - left <= 100)	// ���� Quick Sort -> ũ�Ⱑ ���� �� �ٷ� �� �ִ� ũ�� (���⼭�� 100)�� ���, ���� ������ �Ѵ�.
	{
		InsertSort(arr, left, right);
	}
	else if (left <= right)
	{
		int pivot = Partition(arr, left, right);	//Partition�� ����, pivot ������ ����
		QuickSort(arr, left, pivot - 1);	// ���� pivot ������ ��ͷ� ȣ��
		QuickSort(arr, pivot + 1, right);	// ���� pivot �������� ��ͷ� ȣ��
	}
}

int main(void)
{
	srand((unsigned int)time(0));	// rand�� �׶����� �ٲ�� seed�� ����
	std::ofstream writefile;
	std::ifstream readfile;

	writefile.open("test_array.csv");
	for (int i = 0; i < 1000000; i++)
	{
		writefile << rand() << "\n";	//100000���� ���� ���� ���� csv ���� ����
	}
	writefile.close();

	readfile.open("test_array.csv");
	std::string temp;
	std::vector<int> arr;
	while (std::getline(readfile, temp))
	{
		if (temp.length() != 0)
			arr.push_back(atoi(temp.c_str()));	// �Ʊ� ���� csv ���Ͽ��� �ϳ��� string ���� �ҷ��� ��, c_str�� ���� char * �� ���� �� atoi�� ���� ���ڷ� ��ȯ
		// ���� ���Ϳ� push_back
	}

	arr.push_back(ERROR_BIG_NUMBER);	// ������ �ε��� ������ ����� ���� �����ϱ� ����, ū ���� ���Ƿ� �����߽��ϴ�.


	clock_t start, end;

	start = clock();
	QuickSort(arr, 0, arr.size() - 1);
	end = clock();

	printf("���� Quick Sort = %.3lf��\n", (end - start) / (double)1000);

	arr.pop_back();	// �Ʊ� �����ߴ� ū ���� �ٽ� ���ݴϴ�.


	//for (size_t i = 0; i < arr.size(); i++)
	//{
	//	printf("%02d ", arr[i]);
	//}
	//printf("\n");

	return 0;
}