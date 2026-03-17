//int main()
//{
//	char arr[] = "hello world";
//	int len = strlen(arr);
//	printf("%s",nix(arr,len));
//	return 0;
//}

//struct student 
//{
//	int id;
//	char name[20];
//	int age;
//	double scort;
//};
//
//int main()
//{
//	struct student arr[3];
//	double max = 0;
//	int	one=0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf_s("%d %s %d %lf", &arr[i].id, arr[i].name,20, &arr[i].age, &arr[i].scort);
//	}
//	for (int j = 0; j < 3; j++)
//	{
//		if (arr[j].scort > max)
//		{
//			max = arr[j].scort;
//			one = j;
//		}
//	}
//	printf("分数最高的是%.2lf,%s同学\n", max, arr[one].name);
//	return 0;
//}

//typedef struct data
//{
//	int year;
//	int month;
//	int day;
//}data;
//
//int bijiao(data a1, data a2)
//{
//	if (a1.year != a2.year)
//		return a1.year < a2.year ? 1 : 2;
//	if (a1.month != a2.month)
//		return a1.month < a2.month ? 1 : 2;
//	if (a1.day != a2.day)
//		return a1.day < a2.day ? 1 : 2;
//	return 0;
//}
//int main()
//{
//	data arr[2];
//	for (int i = 0; i < 2; i++)
//	{
//		printf("第%d段时间：", i + 1);
//		scanf_s("%d %d %d", &arr[i].year, &arr[i].month, &arr[i].day);
//	}
//	int rt = bijiao(arr[0], arr[1]);
//	if (rt == 1)
//		printf("%d.%d.%d的时间更早\n", arr[0].year,arr[0].month,arr[0].day);
//	else if(rt==2)
//		printf("%d.%d.%d的时间更早\n", arr[1].year, arr[1].month, arr[1].day);
//	else
//		printf("两时间一样\n");
//	return 0;
//}

//#include <string.h>
//struct book
//{
//	char title[30];
//	char author[20];
//	int price;
//	int is_borrowed;//为1 可借出
//};
//int main()
//{
//	char name[30] = { 0 };
//	struct book b1 = { "红毛狮王去流浪","沈石溪",20,1 };
//	struct book b2 = { "月亮与六便士","毛霉",20,1 };
//	struct book b3 = { "悟空传","今何在",30,1 };
//	struct book bkt[3] = { b1,b2,b3 };
//	printf("请输入书名：");
//	scanf_s("%s", &name,30);
//	int font = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		if (strcmp(bkt[i].title, name)==0)
//		{
//			if (bkt[i].is_borrowed == 1)
//			{
//				font = 1;
//				printf("《%s》存在,可借出\n", bkt[i].title);
//				bkt[i].is_borrowed = 0;
//				printf("成功借出\n");
//				break;
//			}
//			else if (bkt[i].is_borrowed == 0)
//			{
//				printf("《%s》存在,已被借走,暂时不可借出\n", bkt[i].title);
//				break;
//			}
//		}
//	}
//	if(font == 0)
//	{
//		printf("该书不存在");
//	}
//	return 0;
//}

#include <assert.h>
char* my_strcpy1(char* a1, const char* a2)
{
	assert(a1);
	assert(a2);
	char* start = a1;
	while (*a2 != '\0')
	{
		*a1 = *a2;
		a1++;
		a2++;
	}
	return start;
}
char* my_strcpy2(char* a1, const char* a2)
{
	assert(a1);
	assert(a2);
	char* start = a1;
	while (*a1++ = *a2++)
	{
		;
	}
	return start;
}
int main()
{
	char arr[20] = " ";
	char att[] = "hello world";
	printf("%s\n", my_strcpy1(arr, att));
	printf("%s", my_strcpy2(arr, att));
	return 0;
}