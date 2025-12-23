#include <stdio.h>
struct str
{
    char name[20];
    int age;
    char sex[10];
};

int main()              //序列化和反序列
{
    struct str xx = { "wangwu",16,"nan" };
    char buf[100] = { 0 };
    struct str ret = { 0 };
    sprintf(buf, "%s %d %s", xx.name, xx.age, xx.sex);
    //把xx的内容(即格式化数据)转化成字符串到buf里面
    printf("%s\n", buf);
    sscanf(buf, "%s %d %s", ret.name, &(ret.age), ret.sex);
    //把字符串buf中获取的格式化数据传到ret里
    printf("格式化:%s %d %s", ret.name, ret.age, ret.sex);
    return 0;
