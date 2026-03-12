#include <stdio.h>
//void tess1(int i)
//{
//	if (i < 0)
//		return;
//	printf("%d ", i);
//	tess1(i - 1);
//}
//void tess2(int j)
//{
//	if (j > 5)
//		return;
//	printf("%d ", j);
//	tess2(j + 1);
//}
////int Arrst(int arr[],int n)
////{
////	if (n <= 0)return 0;
////	return arr[n - 1] + Arrst(arr, n - 1);
////}
//int Arrst(int arr[], int m, int n)
//{
//	if (m >= n)return 0;
//	return arr[m] + Arrst(arr, m + 1, n);
//}
//int jiec(int x)
//{
//	if (x <= 1) return 1;
//	return x * jiec(x - 1);
//}
//int fbnq(int y)
//{
//	if (y <= 2)return 1;
//	return fbnq(y - 1) + fbnq(y - 2);
//}
//int main()
//{
//	int i = 5;
//	printf("顺序打印数字\n");
//	tess1(i);
//	int j = 0;
//	printf("\n逆序打印数字\n");
//	tess2(j);
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("\n数组求和\n");
//	printf("%d ", Arrst(arr,0,10));
//	printf("\n阶乘\n");
//	printf("%d ", jiec(5));
//	printf("\n斐波那契\n");
//	printf("%d ", fbnq(6));
//	return 0;
//}
//#include <stdio.h>
//void hnt(int n, char A, char B, char C)
//{
//	if (n == 1)
//	{
//		printf("%c->%c\n", A, C);
//		return;
//	}
//	hnt(n - 1, A, C, B);
//	printf("%c->%c\n", A, C);
//	hnt(n - 1, B, A, C);
//}
//int main()
//{
//	printf("\n汉诺塔\n");
//	hnt(3,'A', 'B', 'C');
//	return 0;
//}
//#include <stdio.h>
//int ti1(int n)
//{
//	if (n <= 1)return 1;
//	return n + ti1(n - 1);
//}
//int maxgys(int a, int b)
//{
//	if (b == 0)return a;
//	return maxgys(b, a % b);
//}
//void zhuh(int a)
//{
//	if (a>1)zhuh(a/2);
//	printf("%d",a%2);
//}
//int tiaof(int a)
//{
//	if (a == 1)return 1;
//	if (a == 2)return 2;
//	return tiaof(a-1) + tiaof(a-2);
//}
//int main()
//{
//	printf("问题一\n");
//	printf("和为%d \n\n",ti1(7));
//	printf("问题2(使用了辗转相除法)\n");
//	printf("最大公约为%d \n\n", maxgys(48, 18));
//	printf("问题3\n");//不会
//	printf("13的2进制为");
//	zhuh(13);
//	//printf("13的十进制转二进制为%d", zhuh(13));
//	printf("\n问题4\n");
//	printf("有%d种\n", tiaof(4));
//	return 0;
//}


//#include <stdio.h>
//int arr1[3] = { 1,2,3 };
//int desk[3];//排序的地点，排在这里面
//int sf[3] = { 0 };//为零代表没有被使用
//void zhh(int n)
//{
//	if (n <= 0)return;
//	zhh(n / 2);
//	printf("%d", n % 2);
//}
//int ttj(int n)
//{
//	if (n == 1)return 1;
//	if (n == 2)return 2;
//	return ttj(n - 1) + ttj(n - 2);
//}
//void npx2(int n)//n代表了当前排到的第几个数 =>n从0开始<=
//{
//	if (n == 3)//如果排到第三个数时，代表排完了，输出即可
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%d ", desk[i]);//输出排序的数
//		}
//		printf("\n");
//		return;//递归的return是回到上一个时间点即n-1
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		if (sf[i]==0)
//		{
//			sf[i] = 1;
//			desk[n] = arr1[i];
//			npx2(n + 1);//n从零开始,当n为2时三个数已经排完了
//			sf[i] = 0;
//		}
//	}
//	return;//往回走，别回头
//}
//int main()
//{
//	printf("题目3----十进制转二进制\n");
//	zhh(13);
//	printf("\n题目4----跳台阶\n");
//	printf("have %d kinds\n", ttj(5));
//	printf("题目5----0到n的所有排序\n");
//	npx2(0);
//	return 0;
//}
//int mi(int x, int y)
//{
//	if (y == 0)return 1;
//	return x * mi(x, y - 1);
//}
//int fbn(int n)
//{
//	if (n <= 2)return 1;
//	return fbn(n - 1) + fbn(n - 2);
//}
//int promax(int arr[], int n)
//{
//	if (n == 3)return arr[n];
//	int max1 = promax(arr, n + 1);
//	return arr[n] > max1 ? arr[n] : max1;
//}
//void yhsj(int n)
//{
//
//}
//int main()
//{
//	printf("题目1---求幂\n");
//	printf("2的5次方是%d\n", mi(2, 5));
//	printf("题目2---斐波那契\n");
//	printf("斐波那契第六位是%d\n", fbn(6));
//	printf("题目3---倒序字符串\n");
//	//dxzfc("")//还没开始复习指针
//	printf("题目4---求数组最大值\n");
//	int arr[4] = { 3,7,1,5 };
//	printf("数组最大值是%d\n", promax(arr,0));
//	printf("题目5---杨辉三角\n");
//	yhsj(5);
//
//	return 0;
//}
//int att(int a, int b)
//{
//	return a > b ? a : b;
//}
//int gys(int a, int b)
//{
//	if (b == 0)return a;
//	return gys(b, a % b);
//}
//int main()
//{
	//printf("%d \n",att(12, 14));
	//printf("%d ", gys(48, 18));
	//for (int i = 0; i < 2000; i++)
	//{
	//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
	//	{
	//		printf("%d \n", i);
	//	}
	//}
	//for (int i = 100; i < 201; i++)
	//{
	//	int j = 0;
	//	for (j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)break;
	//	}
	//	if (i == j)printf("%d ", i);
	//}
	//printf("\n");
	/*int arr[3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <3-i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int max = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = max;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/
//int erf1(int arr[], int n, int len)					//二分查找，前提是数组必须有序
//{
//	int start = 0;
//	int end = len - 1;
//	while (start <= end)
//	{
//		int mid = (start + end) / 2;
//		if (arr[mid] > n)
//		{
//			end = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			start = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	printf("二分查找到的数下标是%d\n", erf1(arr, 2, sz));
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));			//随机数
//	for (int i = 0; i < 10; i++)
//	{
//		int r = rand() % 101 + 50;  //生成50到150之间的随机数
//		printf("%d ", r);
//	}
//	return 0;
//}
//int main()
//{
//	double a = 0.00f;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			a += 1.0 / i;
//		}
//		if (i % 2 == 0)
//		{
//			a -= 1.0 / i;
//		}
//	}
//	printf("%1f", a);
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j < i+1; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void shus()
//{
//	printf("100到200以内的素数有：\n");
//	for (int i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for ( j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//int main()
//{
//	shus();
//	return 0;
//}
//void jh(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a = 12;
//	int b = 54;
//	jh(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//void kj(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	kj(n);
//	return 0;
//}
//void hyw(int n)						//递归打印每一个数
//{
//	int i=n%10;
//	if (n == 0)return;
//	hyw(n / 10);
//	printf("%d ", i);
//}
//int main()
//{
//	hyw(1234);
//	return 0;
//}
//int jc(int n)
//{
//	if (n <= 1)return 1;
//	return n * jc(n - 1);
//}
//int main()
//{
//	printf("%d\n",jc(5));
//	int ap = 1;
//	for (int i = 1; i <= 5; i++)
//	{
//		ap *= i;
//	}
//	printf("%d\n", ap);
//	return 0;
//}
//int fb(int n)
//{
//	if (n <= 2)return 1;
//	return fb(n - 1) + fb(n - 2);
//}
//int main()
//{
//	printf("%d\n",fb(5));
//	int a = 1, b = 1;
//	int c = 0;
//	for (int i = 3; i <= 5; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	printf("%d", c);
//	return 0;
//}
//int cf(int n, int m)
//{
//	if (m <= 1)return n;
//	return n * cf(n, m - 1);
//}
//int main()
//{
//	printf("%d ", cf(2, 5));
//	return 0;
//}
//int mwh(int n)
//{
//	int i = n % 10;
//	printf("%d\n", i);
//	if (n == 0)return 0;
//	return i + mwh(n / 10);
//}
//int main()
//{
//	printf("\n%d ", mwh(123));
//	return 0;
//}
//#include <assert.h>
//#include <string.h>
//int my_strlen(char* arr)
//{
//	assert(arr);
//	if (*arr == '\0')return 0;
//	return 1 + my_strlen(arr + 1);
//}
//void reverse_string1(char* arr,int i)
//{
//	assert(arr);
//	char* left = arr;
//	char* right = arr + i - 1;
//	while (left<right)
//	{
//		char x = *left;
//		*left = *right;
//		*right = x;
//		left++;
//		right--;
//	}
//}
//void reverse_string2(char* arr)
//{
//	assert(arr);
//	int len = strlen(arr);
//	char temp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (my_strlen(arr+1) >= 2)
//		reverse_string2(arr + 1);
//	*(arr + len - 1) = temp;
//}
//int main()
//{
//	char arr[] = "nihaihaoma"; 
//	int i = my_strlen(arr);
//	printf("%d\n", i);
//	reverse_string1(arr,i);
//	printf("%s\n", arr);
//	char arr2[] = "nihaihaoma";
//	reverse_string2(arr2);
//	printf("%s\n", arr);
//	return 0;
//}
//#include <stdio.h>
//typedef struct Stu st;
//struct Stu
//{
//	char name[20];
//	int age;
//};
//void print(struct Stu* s)
//{
//	printf("%s %d\n", (*s).name, (*s).age);
//	printf("%s %d\n", s->name, s->age);
//}
//int main()
//{
//	struct Stu s = { "wangwu",26 };
//	st s2 = { "lishi",24 };
//	print(&s2);
//	printf("%s %d", s.name, s.age);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 3, 7, 1, 8, 2, 5, 9, 4, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int min = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = min;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 2, 3, 4, 4, 4, 5, 6, 6 };			//只打印不重复的数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int j = 0;
//	for (int i = 0; i < sz ; i++)
//	{
//		if (j == 0 || arr[i] != arr[i + 1])
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void rev(int * arr,int left,int right)
//{
//	while (left < right)
//	{
//		int at = arr[left];
//		arr[left] = arr[right];
//		arr[right] = at;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };             //使数组整体右移k位，使用三步翻转法
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf_s("%d", &k);
//	rev(arr,0,sz-1);				//整体反转
//	rev(arr,0, k-1);				//翻转前k个
//	rev(arr,k,sz - 1);				//翻转后k个
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
void rev(int* arr, int left, int right)
{
	while (left < right)
	{
		int at = arr[left];
		arr[left] = arr[right];
		arr[right] = at;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	scanf_s("%d", &k);
	rev(arr,0,sz-1);
	rev(arr, 0, k - 1);
	rev(arr, k, sz - 1);
	for (int i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}