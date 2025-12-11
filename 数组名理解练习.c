#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int x[] = { 1,2,3,4,5 };
    char y[] = { 'a','d','f','s' };
    int a[3] = { 0 };
    int (*arr)[3] = &a;
    int (*pf)(int, int) = &add;

    printf("%d \n", sizeof(&x+1));//
    printf("%d \n", sizeof(&x[0]));
    printf("%d \n", sizeof(&x[0]+1));
    printf("%d \n", sizeof(x+1));
    printf("%d \n", sizeof(x[1]));
    printf("%d \n", sizeof(&x));
    printf("%d \n", sizeof(*&x));

    printf("%d \n", sizeof(y));
    printf("%d \n", sizeof(y+0));
    printf("%d \n", sizeof(*y));
    printf("%d \n", sizeof(y[1]));
    printf("%d \n", sizeof(&y));
    printf("%d \n", sizeof(&y+1));
    printf("%d \n", sizeof(&y[0]+1));

    return 0;
}
