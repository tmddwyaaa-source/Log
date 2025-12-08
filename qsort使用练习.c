#include <stdio.h>
//qsort使用练习
struct One
{
    char name[20];
    int age;
};

int cmp_int(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2 ;
}

int cmp_struct_name(const void* e1, const void* e2)
{
    return strcmp(((struct One*)e1)->name, ((struct One*)e2)->name);
}

int cmp_struct_age(const void* e1, const void* e2)
{
    return ((struct One*)e1)->age - ((struct One*)e2)->age;
}

int main()
{
	int arr[10] = { 2,3,4,1,7,8,10,5,6,9 };
    struct One a[3] = { {"zhangsan",20},{"lishi",23} ,{"wangwu",24} };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int sz1 = sizeof(a) / sizeof(a[0]);
    printf("整形排序:\n");
    qsort(arr, sz, sizeof(arr[0]), cmp_int);
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n结构体按name排序:\n");
    qsort(a, sz1, sizeof(a[0]), cmp_struct_name);
    for (int i = 0; i < sz1; i++)
    {
        printf("%s %d\n", a[i].name,a[i].age);
    }
    printf("\n结构体按age排序:\n");
    qsort(a, sz1, sizeof(a[0]), cmp_struct_age);
    for (int i = 0; i < sz1; i++)
    {
        printf("%s %d\n", a[i].name, a[i].age);
    }
    return 0;

}