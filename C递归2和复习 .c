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
int att(int a, int b)
{
	return a > b ? a : b;
}
int gys(int a, int b)
{
	if (b == 0)return a;
	return gys(b, a % b);
}
int main()
{
	printf("%d \n",att(12, 14));
	printf("%d ", gys(48, 18));
	for (int i = 0; i < 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d \n", i);
		}
	}
	return 0;
}