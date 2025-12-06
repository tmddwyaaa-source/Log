#include <stdio.h>
int Add(int x, int y)
{
    return x + y;
}
typedef void(*tpf)(int);
int main()
{
    //函数指针
    int (*ff)(int, int) = Add;
    int (*dd)(int, int) = Add;
    //函数指针数组
    int (*arr[2])(int, int) = { ff,dd };
    //函数指针数组指针
    int(*(*att)[2])(int, int) = &arr;
    //！！！！！ 一个函数指针的经典例子！！！！！
    void ( * signal( int, void(*)(int) ) )(int);
    //理解起来其实很简单，把它拆开，函数指针的类型其实是int (*变量名)(参数),
    // signal是变量名，它的参数一个是int一个是void的函数指针
    //用typedef改类型名函数指针写法就好理解了
    tpf signal(int, tpf);//它是一个声明，返回值是void函数指针名叫signal的函数，同时他的参数是int和void函数指针

    return 0;
}