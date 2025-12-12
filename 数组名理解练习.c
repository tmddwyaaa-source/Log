#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    char* j = "abcdef";
    char i[] = "abcdef";
    int x[] = { 1,2,3,4,5 };
    char y[] = { 'a','b','f','s','h'};
    int a[3] = { 0 };
    int (*arr)[3] = &a;
    int (*pf)(int, int) = &add;
    printf("int\n");
    printf("%d \n", sizeof(&x+1));//4/8
    printf("%d \n", sizeof(&x[0]));//4/8
    printf("%d \n", sizeof(&x[0]+1));//4/8
    printf("%d \n", sizeof(x+1));//4/8
    printf("%d \n", sizeof(x[1]));//4/8
    printf("%d \n", sizeof(&x));//4/8
    printf("%d \n", sizeof(*&x));//20

    printf("char\n");
    printf("%d \n", sizeof(y));//5
    printf("%d \n", sizeof(y+0));//4
    printf("%d \n", sizeof(*y));//1，首元素地址解引用，就是a,char
    printf("%d \n", sizeof(y[1]));//1
    printf("%d \n", sizeof(&y));//4/8
    printf("%d \n", sizeof(&y+1));//4/8
    printf("%d \n", sizeof(&y[0]+1));//4/8

    printf("strlen  char");
    printf("%d \n", strlen(y));//随机值
    printf("%d \n", strlen(y+0));//随机值
    printf("%d \n", strlen(*y));
    //取出来的是第一个元素的解引用，a解引用是97
    //strlen参数是char*
    //系统会把97转化成地址，越界访问报错
    printf("%d \n", strlen(y[1]));
    //取出来的是第2个元素的解引用，a解引用是98
    //strlen参数是char*
    //系统会把98转化成地址，越界访问报错
    printf("%d \n", strlen(&y));//随机值
    printf("%d \n", strlen(&y+1));//随机值-6
    printf("%d \n", strlen(&y[0]+1));//随机值-1

    printf("strlen  char  i");
    printf("%d \n", strlen(i));//6
    printf("%d \n", strlen(i + 0));//6
    printf("%d \n", strlen(*i));//报错
    printf("%d \n", strlen(i[1]));//报错
    printf("%d \n", strlen(&i));//6
    printf("%d \n", strlen(&i + 1));//随机数
    printf("%d \n", strlen(&i[0] + 1));//5  

    printf("sizeof  char * j");

    return 0;
}
