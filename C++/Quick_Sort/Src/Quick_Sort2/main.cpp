#include "stdafx.h"

#define ERROR_BIG_NUMBER	1000000

void Swap(std::vector<int> & arr, int idx1, int idx2)	// 2, 3번째로 전달되는 인덱스의 값을 변경해주는 함수
{
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int Partition(std::vector<int>& arr, int left, int right)
{
	int pivot = arr[left];	// pivot을 제일 왼쪽 인덱스의 벡터 값으로 잡는다.
	int low = left + 1;	//pivot을 제외한 제일 왼쪽 인덱스를 low로 잡는다.
	int high = right;	//pivot을 제외한 제일 오른쪽 인덱스를 higt로 잡는다.
	while (low <= high)
	{
		while (pivot >= arr[low] && low <= right)	//pivot보다 low인덱스의 벡터 값이 작고, low가 마지막 인덱스보다 작을 때까지 low를 올린다.
			low++;
		while (pivot <= arr[high] && high >= left + 1) //pivot보다 high인덱스의 벡터 값이 크고, low가 pivot 인덱스를 제외한 첫번째 인덱스보다 클 때까지 low를 올린다.
			high--;

		if (low <= high)	// low가 high보다 작으면 값을 변경한다.
			Swap(arr, low, high);

	}

	Swap(arr, left, high);	//high 인덱스에 있는 벡터 값은 결국 pivot보다 작거나 같으므로, pivot과 high 인덱스의 벡터값을 변경한다.
	// 이 함수를 통해 pivot 왼쪽은 pivot보다 작은 값, 오른쪽은 pivot보다 큰 값으로 정렬된다.
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
	if (right - left <= 100)	// 향상된 Quick Sort -> 크기가 내가 잘 다룰 수 있는 크기 (여기서는 100)인 경우, 삽입 정렬을 한다.
	{
		InsertSort(arr, left, right);
	}
	else if (left <= right)
	{
		int pivot = Partition(arr, left, right);	//Partition을 통해, pivot 양쪽을 정렬
		QuickSort(arr, left, pivot - 1);	// 이후 pivot 왼쪽을 재귀로 호출
		QuickSort(arr, pivot + 1, right);	// 이후 pivot 오른쪽을 재귀로 호출
	}
}

int main(void)
{
	srand((unsigned int)time(0));	// rand가 그때마다 바뀌도록 seed를 생성
	std::ofstream writefile;
	std::ifstream readfile;

	writefile.open("test_array.csv");
	for (int i = 0; i < 1000000; i++)
	{
		writefile << rand() << "\n";	//100000개의 랜덤 값을 갖는 csv 파일 생성
	}
	writefile.close();

	readfile.open("test_array.csv");
	std::string temp;
	std::vector<int> arr;
	while (std::getline(readfile, temp))
	{
		if (temp.length() != 0)
			arr.push_back(atoi(temp.c_str()));	// 아까 만든 csv 파일에서 하나씩 string 으로 불러온 후, c_str를 통해 char * 로 변경 후 atoi를 통해 숫자로 변환
		// 이후 벡터에 push_back
	}

	arr.push_back(ERROR_BIG_NUMBER);	// 마지막 인덱스 범위를 벗어나는 것을 방지하기 위해, 큰 값을 임의로 삽입했습니다.


	clock_t start, end;

	start = clock();
	QuickSort(arr, 0, arr.size() - 1);
	end = clock();

	printf("향상된 Quick Sort = %.3lf초\n", (end - start) / (double)1000);

	arr.pop_back();	// 아까 삽입했던 큰 값을 다시 빼줍니다.


	//for (size_t i = 0; i < arr.size(); i++)
	//{
	//	printf("%02d ", arr[i]);
	//}
	//printf("\n");

	return 0;
}