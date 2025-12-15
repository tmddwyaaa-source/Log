#include <stdio.h>
#include <assert.h>
int main()
{
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };
    int b[] = { 1,2,3,4,5,6,7,8 };
    int ret = memcmp(a, b, 32);//比的是字节，字节比出来就结束了
    if(ret>0)
        printf(">\n");
    else if(ret==0)
        printf("==\n");
    else
        printf("<\n");    
    char t[] = "haha kaka";
    memset(t, 'x', 4);
    printf("\n%s\n", t);
    int mm[10] = { 0 };
    memset(mm, 1, 40);//他是从字节改的，把每个字节改成1
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", mm[i]);
    }
    return 0;
}