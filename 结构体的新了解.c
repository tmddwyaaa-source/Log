#include <stdio.h>
#include <stddef.h>
struct stu
{
    int a;
    int b;
    double c;
};
struct at
{
    char name[20];
    int age;
    struct stu ab;
};
struct ddy
{
    int x;
    char y;
    struct ddy* next;
};
#pragma pack(4)//用来改变对齐数的（头文件stddef）
struct isc
{
    int i;
    int j;
    double tp;
};
#pragma pack()
struct ajaj
{
    int yu;
    int hg;
};
void prin(struct ajaj aj)
{
    printf("%d ", aj.yu);
    printf("%d \n", aj.hg);
}
void prin2(const struct ajaj* aj)
{
    printf("%d ", aj->yu);
    printf("%d \n", aj->hg);
}
//位段
struct weiduan
{
    char a : 3;//:后面的意思是只使用3个比特位
    char b : 5;//:后面的数字不能大于类型,char是8，ints是32
    char c : 2;
    char d : 7;
};
int main()
{
    printf("结构体字节\n");
    struct at abt = { "zhangsan",28,{3,5,3.45}};
    printf("%u\n", sizeof(abt));
    printf("%u\n", sizeof(struct stu));
    printf("%s %d %d %d\n", abt.name, abt.age, abt.ab.a, abt.ab.b);
    printf("%u\n", sizeof(struct ddy));
    printf("%u\n", sizeof(struct isc));
    printf("结构体内部数据存储\n");
    printf("%u\n", offsetof(struct stu, a));
    printf("%u\n", offsetof(struct stu, b));
    printf("%u\n", offsetof(struct stu, c));
    printf("结构体传参打印效率对比\n");
    struct ajaj aj = { 2,4 };
    prin(aj);
    prin2(&aj);
    //prin2效率更高，不需要形参，可以加const来防止错误的修改参数
    return 0;
}



