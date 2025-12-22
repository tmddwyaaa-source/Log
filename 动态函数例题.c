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

void getmem(char** p, int num)
{
    *p = (char*)malloc(num);//p解引用就是str,空间在str那
}                          //出函数char** p被销毁,但是str没有，并且被改变了
void test()
{
    char* str = NULL;
    getmem(&str, 100);
    strcpy(str, "hello world");
    printf(str);        //能打印，但是没有释放(free),也没有归无(NULL)
}
int main()
{
    test();
    return 0;
}
void test()
{
    char* p = (char*)malloc(100);
    strcpy(p, "hello world");
    free(p);                //不能打印,空间被收回了
    if (p != NULL)          //p变成野指针了
    {
        strcpy(p, "jibao"); //应该会报错，但是没有？
        printf(p);
    }                       //free后面还没有改p值(NULL)
}
int main()
{
    test();
    return 0;
}
