#include <stdio.h>

int main(void)
{
	int arr[4][2];

	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	int cnt1 = 0;
	int cnt2 = 0;

	int temp[2];

	for (int i = 0; i < 3; i++)
	{
		cnt1 = 0;
		cnt2 = 0;

		temp[0] = arr[i][0];
		temp[1] = arr[i][1];

		for (int j = 0; j < 3; j++)
		{
			if (temp[0] == arr[j][0])
				cnt1++;
			if (temp[1] == arr[j][1])
				cnt2++;
		}

		if (cnt1 == 1)
			arr[3][0] = temp[0];
		if (cnt2 == 1)
			arr[3][1] = temp[1];
	}

	printf("%d %d\n", arr[3][0], arr[3][1]);



	return 0;
}