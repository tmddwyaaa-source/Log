#include <stdio.h>
//函数指针数组版
void jiem()
{
    printf("**********************\n");
    printf("***1.加法    2.减法***\n");
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
int main()
{
    int r = 0;
    int a = 0;
    int b = 0;
    int (*pp[3])(int, int) = { 0,Add,Sub };
    do 
    {
        jiem();
		printf("请选择：\n");
        scanf("%d", &r);
        if (r == 0)
        {
            printf("退出成功\n");
        }
        else if (r >= 1 && r <= 2)
        {
            printf("输入两个操作数:\n");
            scanf("%d %d", &a, &b);
            int ret = pp[r](a, b);
            printf("结果是%d\n", ret);
        }
        else
        {
            printf("输入错误，请重试\n");
        }
    } while (r);
    return 0;
}