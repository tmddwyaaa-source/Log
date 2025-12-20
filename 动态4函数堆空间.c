#include <stdio.h>
int main()
{
    int arr[10] = { 0 };
    int* p = (int*)malloc(40);//malloc是申请空间,一般和free一起使用，void*类型,一个参数
    if (p == NULL)
    {
        printf("%s", strerror(errno));
        return 1;
    }
    for (int i = 0; i < 10; i++)
    {
        *(p + i) = i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", *(p + i));
    }
    free(p);//解放空间,让空间免费了,但是p还记得路线,所以p要NULL
    p = NULL;//如果长期不解放空间会导致内存运行空间越来越少,死机
    
    int* p = (int*)calloc(10,sizeof(int));//跟malloc作用差不多，就是多个初始化为0,void*类型,两个参数(个数，字节宽度)
    int* tar = realloc(p, 80);//改空间，如p指向的40空间变成80空间,返回首元素地址
    return 0;
}