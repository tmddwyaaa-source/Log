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

struct kat
{
    int t;
    char r;
    double c;
};
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

    int nm = 29;
#if 1           //只能是常量表达式，成立运行下面代码
    printf("mmqqmmwwmm\n"); //如果成立这段代码就运行
#endif // 1     //注释这里是方便观看配对,#if #endif一对

#define __KAKA__
#ifdef __KAKA__     //判断是否有定义过,是就进去,反之
    printf("有定义过\n");
#endif//__KAKA__

#ifndef NMSN        //判断是否未定义过,是就进去
    printf("未定义过\n");
#endif //NMSN

//头文件包含
#ifndef _TACE_J             //如果没定义就进去,然后定义
#define _TACE_J             //代码可正常运行
    int Add(int x, int y);  //多次引用的话就只会导入一次
#endif                      //比较老

#pragma once        //只导入一次,和上面代码效果一致,比较新

#define OFFSETOF(type,name) (size_t)&(((type*)0)->name)
    //计算偏移值的宏,将0强转从类型名然后指向变量名的地址
    //取地址后强转从无符号类型,例0x0003=3;
    printf("%d\n", OFFSETOF(struct kat,t));   
    printf("%d\n", OFFSETOF(struct kat, r));
    printf("%d\n", OFFSETOF(struct kat, c));
    return 0;
}
