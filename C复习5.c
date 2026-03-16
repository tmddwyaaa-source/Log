//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);						//算瓶子，完完全全自己写出来的哦
//	int count = 0;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			count++;
//			sum++;
//			if (count % 2 == 0)
//			{
//				count++;
//				sum++;
//			}
//		}
//	}
//	sum += n;
//	printf("%d ", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)							//打印菱形，上半段写的来，后半段太糟糕了
//	{
//		for (int j = 0; j < n - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j <= i+1; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2*(n-i-1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <string.h>
//char* nix(char* arr,int len)							//逆序字符串
//{
//	char* start = arr;
//	char* left = arr;
//	char* right = arr + len - 1;
//	while (left<right)
//	{
//		char att = *left;
//		*left = *right;
//		*right = att;
//		left++;
//		right--;
//	}
//	return start;
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	int len = strlen(arr);
//	printf("%s",nix(arr,len));
//	return 0;
//}