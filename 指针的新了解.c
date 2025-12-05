#include <stdio.h>
void mast(int(*arr)[5])
{
	;
}
int Add(int x, int y)
{
	return x + y;
}
void diaoy(int (*tf)(int, int))
{
	int a = 2;
	int b = 4;
	int ret = tf(a, b);
	printf("%d", ret);
}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[] = { 1,2,3,4,5 };
	int* prr[] = { arr1,arr2,arr3 };
	int (*p)[5] = &arr1;
	int arr[5][5] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", prr[i][j]);
		}
		printf("\n");
	}
	printf("%p\n", p);
	printf("%p\n", p+1);
	mast(arr);
	printf("函数指针练习1:\n");
	int (*hans)(int, int) = &Add;
	int ret = (*hans)(3, 4);
	printf("%d", ret);
	printf("函数指针练习2:\n");
	diaoy(Add);
	return 0;
}