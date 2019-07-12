#include <stdio.h>

int main(void)
{
	int arr[44] = { 0, };

	arr[0] = 1;


	for (int i = 1; i < 44; i++)
	{
		arr[i] += arr[i-1] + (i + 1);
	
	}

	int num;
	int len;
	int cnt;
	scanf("%d", &len);

	for (int k = 0; k < len; k++)
	{
		scanf("%d", &num);
		cnt = 0;

		for (int i = 0; i < 44; i++)
		{
			for (int j = 0; j < 44; j++)
			{
				for (int l = 0; l < 44; l++)
				{
					if (arr[i] + arr[j] + arr[l] == num)
					{
						cnt++;
					}
				}
			}
		}

		if (cnt == 0)
			printf("0\n");
		else
			printf("1\n");

	}

	


	return 0;
}