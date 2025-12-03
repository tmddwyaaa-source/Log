#include <stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[] = { 1,2,3,4,5 };
	int* prr[] = { arr1,arr2,arr3 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", prr[i][j]);
		}
		printf("\n");
	}
	return 0;
}