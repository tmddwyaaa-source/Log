enum dey
{
  Mon,//默认初始值是0,枚举都是有默认值的
  Tues,//连续的存储，0 1 2 3 4 5 6
  Wed,
  Thur,
  Fri,
  Sat,
  Sun
};

enum shuz
{
    Yi=1,//如果改第一位枚举常量的初始值，如0变成1
    Er,
    San,
    Si,
    Wu
};
union un//联合体
{
    int a;
    char c;
}u;
int cheak()
{
    union man
    {
        char c;
        int a;
    }m;
    m.a = 1;
    return m.c;
}
int main()

{
    printf("结构体\n");
    enum day n = Fri;//enum枚举只有实例化变量才占空间
    printf("%d\n", Mon);
    printf("%d\n", Tues);
    printf("%d\n", Wed);
    printf("%d\n", Thur);
    printf("%d\n", Fri);
    printf("%d\n", Sat);
    printf("%d\n", Sun);

    printf("\n\n%d\n", Yi);
    printf("%d\n", Er);
    printf("%d\n", San);
    printf("%d\n", Si);
    printf("%d\n", Wu);
    printf("联合体\n");//他们的内存是有公用的部分的
    union un u;
    printf("%d\n", sizeof(u));
    printf("%d\n", sizeof(u.a));
    printf("%d\n", sizeof(u.c));

    printf("联合体判断大端小端\n");
    int x = cheak();
    printf("%d\n", x);
    if (x == 1)
    {
        printf("是小端\n");
    }
    else
        printf("是大端\n");

    return 0;
}
