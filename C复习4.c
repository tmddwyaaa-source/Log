//int main()
//{
//	int x = 7;					//计算数二进制里有几个一
//	int z = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((x & 1) == 1)
//		{
//			z++;
//		}
//		x >>= 1;
//	}
//	printf("%d ", z);
//	return 0;
//}

//int main()
//{
//	int x = 28, y = 7;
//	printf("x=%d , y=%d\n", x, y);
//	x = x ^ y;						//按位异或消消乐
//	y = x ^ y;
//	x = x ^ y;
//	printf("x=%d , y=%d\n", x, y);
//	return 0;
//}

//int main()
//{
//	int x = 1999, y = 2299;				//算两个数二进位不同的位数
//	int z = x ^ y;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((z >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d ", count);
//	return 0;
//}

//int main()
//{
//	int n = 1929;
//	printf("奇数:\n");							//打印二进制奇数位偶数位
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	return 0;
//}

//#include <ctype.h>
//int main()
//{
//	char arr[] = "HELLO WORLD";
//	for (int i = 0; arr[i] != '\0'; i++)			//判断大写，变成小写
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);				//判断和改变大小写字符的库函数只能一个个改变，不能直接整个数组
//		}
//	}
//	printf("%s\n", arr);
//	for (int i = 0; arr[i] != '\0'; i++)			//判断小写，变成大写
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] = toupper(arr[i]);
//		}
//	}
//	printf("%s\n", arr);
//	return 0;
// }

//int my_islower(char arr)
//{
//	if (arr >= 'a' && arr <= 'z')
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//char my_toupper(char arr)
//{
//	if (arr >= 'a' && arr <= 'z')
//	{
//		return arr - 32;
//	}
//	else
//		return arr;
//}
//int my_isupper(char arr)
//{
//	if (arr >= 'A' && arr <= 'Z')return 1;
//	else return 0;
//}
//char my_tolower(char arr)
//{
//	if (arr >= 'A' && arr <= 'Z')return arr+32;
//	else return arr;
//}
//int main()
//{
//	char arr[] = "NIhaiHaoMa";
//	for (int i = 0; arr[i] != '\0'; i++)
//	{
//		if (my_islower(arr[i]))
//		{
//			arr[i] = my_toupper(arr[i]);
//		}
//	}
//	printf("%s\n", arr);
//	for (int i = 0; arr[i] != '\0'; i++)
//	{
//		if (my_isupper(arr[i]))
//		{
//			arr[i] = my_tolower(arr[i]);
//		}
//	}
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int at = 0;
//	int sn = 0;
//	for (int i = 0;i<5; i++)
//	{
//		at = at * 10 + a;
//		sn += at;
//	}
//	printf("%d\n", sn);
//	return 0;
//}

//#include <math.h>
//int main()									//水仙花数。。。。注意水仙花数只有4个，而且只有3位数	
//{
//	
//	for (int i = 0; i < 100000; i++)
//	{
//		int z = i;
//		int lins = 0;
//		int sum = 0;
//		do
//		{
//			lins = z % 10;
//			sum += lins*lins*lins;
//			z = z / 10;
//		} while (z != 0);
//		if (sum == i&&sum!=1&&sum!=0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int* att = arr;
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", *(att + i));
//	}
//	return 0;
//}

//int my_strlen(char* arr)						//两个指针相减的版本
//{
//	char* start = arr;
//	while (*arr != '\0')
//	{
//		arr++;
//	}
//	return (arr - start);
//}
//int main()
//{
//	char arr[] = "aniadfljd";
//	printf("%d ", my_strlen(arr));
//	return 0;
//}
