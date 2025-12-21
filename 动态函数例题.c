#include <stdio.h>
void memhaode(char* p)
{
    p = (char*)malloc(100);//形参，出了函数就会消失
                          //p这个指针没了，但申请的空间还在，但是找不到了
}
void test()
{
    char* str = NULL;
    memhaode(str);//没有返回东西，指针也被销毁了，所以str还是NULL
    strcpy(str, "hello world");//strcpy会因为NULL报错
    printf(str);
}
int main()
{
    test();
    return 0;
}
char* getmem(void)
{
    char p[] = "hello world";//p出函数范围就自动销毁了，传了个空指针出去
    return p;
}
void test(void)
{
    char* str = NULL;
    str=getmem();//str=NULL
    printf("str");
}
int mian()
{
    test();
    return 0;
}
int* test()
{
    int a = 10;
    return &a;
}
int main()
{
    int* p = test();
    //printf("hello world\n")    //这样就改变a了,a空间回收后给printf函数用
    printf("%d\n", *p);//打印还是10是因为空间收回去了但是p指向的位置没变
    return 0;         //那空间初始位置还是10(a被压栈)
}
