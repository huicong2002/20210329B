#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[46];
int main()
{
	int i;
	int x;
	arr[0] = 1;
	arr[1] = 1;

	for (i = 2; i < 46; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	while (scanf("%d", &x) != EOF && x != 0)
	{
		int Mark = 0;
		for (i = 0; i < 46; i++)
		{
			if (arr[i] == x)
			{
				Mark = 1;
				break;
			}
			if (arr[i] > x)
			{
				break;
			}
		}
		if (Mark) {
			printf("Second win\n");
		}
		else {
			printf("First win\n");
		}
			

	}
	return 0;
}
