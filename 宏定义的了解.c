#include <stdio.h>
#define GGGG 2333
//define定义字符串

#define PRINT(n)  printf("the value of x is %d\n",n)
//define定义宏

#define PRINT2(xy) printf("the value of "#xy"is %d\n",xy)
//"#"还可以用来让xy不变成数字(10)，而是对应的那个字符串(xy)

#define tata(class,num) class##num
//"##"是用来连接两个字符串的，合并成一个

#define bijiao(i,j) ((i)>(j)?(i):(j))
//注意宏是替代,要注意用括号括起来,防止操作符顺序有误

#define MALLOC(num,type) (type*)malloc((num)*sizeof(type));
//被替换了(int*)malloc((10)*sizeof(int))
int main()
{
    int n = 10;
    PRINT(n);

    int xy = 10;
    PRINT2(xy);

    int class103 = 2323;
    printf("%d\n", tata(class, 103));
    printf("%d\n", class103);

    int i = 10;
    int j = 12;
    printf("比较i和j的大小%d\n", bijiao(i, j));
    //宏定义优点是写小代码的时候运行快
    int m = bijiao(i++, j++);
    printf("结果是%d\n", m);
    //一定要主要它是替换，要小心副作用,操作符也会进去

    int* S = MALLOC(10, int);
    //可行
    free(S);
    S = NULL;
    
    printf("%d\n", GGGG);
    #undef GGGG//取消定义
    //printf("%d\n", GGGG);

    return 0;
}