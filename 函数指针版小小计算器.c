#include <stdio.h>
//函数指针版
void jiem()
{
    printf("**********************\n");
    printf("***1.加法    2.减法***\n");
    printf("***3.乘法    4.除法***\n");
    printf("********0.退出********\n");
    printf("**********************\n");
}
int Add(int x, int y)
{
    return x + y;
}
int Sub(int x, int y)
{
    return x - y;
}
void cala(int (*tidai)(int,int))
{
    int a = 0;
    int b = 0;
    printf("输入两个操作数：\n");
    scanf("%d %d", &a, &b);
    int ret = tidai(a, b);
    printf("结果是%d\n", ret);
}
int main()
{
    int r = 0;
    do 
    {
        jiem();
		printf("请选择：\n");
        scanf("%d", &r);
        switch (r)
        {
        case 1:
            cala(Add);
            break;
        case 2:
            cala(Sub);
            break;
        case 0:
            printf("退出计算机\n");
            break;
        default:
            printf("输入错误，请重试");
        }

    } while (r);
    return 0;
}