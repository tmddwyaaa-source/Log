//#include <stdio.h>
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
#include <stdio.h>
int ti1(int n)
{
	if (n <= 1)return 1;
	return n + ti1(n - 1);
}
int maxgys(int a, int b)
{
	if (b == 0)return a;
	return maxgys(b, a % b);
}
void zhuh(int a)
{
	if (a>1)zhuh(a/2);
	printf("%d",a%2);
}
int tiaof(int a)
{
	if (a == 1)return 1;
	if (a == 2)return 2;
	return tiaof(a-1) + tiaof(a-2);
}
int main()
{
	printf("问题一\n");
	printf("和为%d \n\n",ti1(7));
	printf("问题2(使用了辗转相除法)\n");
	printf("最大公约为%d \n\n", maxgys(48, 18));
	printf("问题3\n");//不会
	printf("13的2进制为");
	zhuh(13);
	//printf("13的十进制转二进制为%d", zhuh(13));
	printf("\n问题4\n");
	printf("有%d种\n", tiaof(4));
	return 0;
}