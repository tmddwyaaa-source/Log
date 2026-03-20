#include <stdio.h>

void fun(int* arr, int left, int right)
{
	while (left < right)
	{
		int x = arr[left];
		arr[left] = arr[right];
		arr[right] = x;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	int k = 4;
	fun(arr, 0, sz-1);
	fun(arr, 0, k-1);
	fun(arr, k, sz-1);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}