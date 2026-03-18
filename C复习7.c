//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };						//将数组所有奇数放在偶数前面---方法一
//	int j = 0, x = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			x = arr[j];
//			arr[j] = arr[i];
//			arr[i] = x;
//			j++;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void jh(int* arr, int sz)
//{
//	int* left = arr;
//	int* right = arr + sz - 1;
//	while (left < right)
//	{
//		while (left < right && (*left % 2 == 1))					//将数组所有奇数放在偶数前面---双指针版
//			left++;
//		while (left < right && (*right % 2 == 0))
//			right--;
//		if (left < right)
//		{
//			int x = *left;
//			*left = *right;
//			*right = x;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	jh(arr, sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include <assert.h>
//#include <string.h>
//int my_strlen(char* arr)
//{
//	assert(arr);
//	int count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//char* my_strcpy(char* arr2, const char* arr)
//{
//	assert(arr2);
//	assert(arr);
//	char* start = arr2;
//	while (*arr2++ = *arr++)
//	{
//		;
//	}
//	return start;
//}
//int main()
//{
//	char arr[] = "hello world";
//	char arr2[20] = { 0 };
//	//char arr3 = NULL;
//	int len = my_strlen(arr);
//	printf("%d \n", len);
//	//printf("%d \n", strlen(arr));
//	printf("%s \n", my_strcpy(arr2,arr));
//	return 0;
//}

int main()
{
	//判断大端小端存放，大端是正的放的，小端是反着放的
	int a = 1;					//通常都是小端存放
	if (*(char*)&a == 1)		//访问第一个位置，如果是1代表是反着放的，是小端
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}