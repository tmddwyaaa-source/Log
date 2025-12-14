int add(int a, int b)
{
    return a + b;
}
int main()
{
    int at[3][4] = { 0 };
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
    printf("%d \n", sizeof(j));//4/8
    printf("%d \n", sizeof(j + 1));//4/8
    printf("%d \n", sizeof(*j));//error
    printf("%d \n", sizeof(j[0]));//error
    printf("%d \n", sizeof(&j));//4/8
    printf("%d \n", sizeof(&j + 1));//4/8
    printf("%d \n", sizeof(&j[0] + 1));//4/8

    printf("strlen  char * j");
    printf("%d \n", strlen(j));//6
    printf("%d \n", strlen(j + 1));//5
    printf("%d \n", strlen(*j));//error
    printf("%d \n", strlen(j[0]));//error
    printf("%d \n", strlen(&j));//随机数
    printf("%d \n", strlen(&j + 1));//随机数-1
    printf("%d \n", strlen(&j[0] + 1));//5

    printf("sizeof  int at[][]");
    printf("%d \n", sizeof(at));//48
    printf("%d \n", sizeof(at[0][0]));//4
    printf("%d \n", sizeof(at[0]));//16
    printf("%d \n", sizeof(at[0]+1));//4/8
    printf("%d \n", sizeof(*(at[0]+1)));//4
    printf("%d \n", sizeof(at + 1));//at[1][0],所以是4/8
    printf("%d \n", sizeof(*(at + 1)));//上一个地址的解引用，16
    printf("%d \n", sizeof(&at[0] + 1));//还是at[1][0]地址，4/8
    printf("%d \n", sizeof(*( & at[0] + 1)));//16
    printf("%d \n", sizeof(*at));//16
    printf("%d \n", sizeof(at[3]));
    //sizeof是不具体看at[3]合不合理的，所以结果是16


    return 0;
}
