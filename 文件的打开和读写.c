#include <stdio.h>
#include <string.h>
#include <error.h>
int main()                //文件的打开和读写
{
    FILE* p = fopen("C:\\Users\\tmddw\\Desktop\\text.txt", "r"); //w是写，r是读
    if (p == NULL)
    {
        printf("%s", strerror(errno));
        return 1;
    }
    char i = 0;
    for (i = 'a'; i < 's'; i++)
    {
        fputc(i, p);              //单个单个的写
    }
    for (int j = 0; j < 10; j++)
    {
        int c = fgetc(p);         //单个单个的读
        printf("%c \n", c);
    }
    fclose(p);
    p = NULL;
    return 0;
}

int main()
{
    FILE* p = fopen("C:\\Users\\tmddw\\Desktop\\text.txt", "r");
    if (p == NULL)
    {
        printf("%s", strerror(errno));
        return 1;
    }
    char arr[20];
    fputs("hellow world", p);           //一行一行写
    fgets(arr, 20, p);                  //一行一行读
    printf("%s\n", arr);
    fclose(p);
    p = NULL;
    return 0;
}
struct str
{
    int a ;
    char arr[11];
    char c ;
};
int main()
{
    struct str st = { 20,"hihihihihi",'g' };
    FILE* p = fopen("C:\\Users\\tmddw\\Desktop\\text.txt", "w");
    if (p == NULL)
    {
        printf("%s", strerror(errno));
        return 1;
    }
    fprintf(p, "%d %s %c", st.a, st.arr, st.c);
    fscanf(p, "%d %s %c", &(st.a), &st.arr, &(st.c));
    printf("%d %s %c", st.a, st.arr, st.c);
    fprintf(stdout, "%d %s %c", st.a, st.arr, st.c);
    fclose(p);
    p = NULL;
    return 0;
}
int main()                      //二进制对文件的读和写
{
    int qwq = 30;
    FILE* p = fopen("C:\\Users\\tmddw\\Desktop\\text.txt", "rb");//rb读wb写
    if (p == NULL)
    {
        perror("fopen");
        return 1;
    }
    //fwrite(&qwq, sizeof(qwq), 1, p);
    fread(&qwq, sizeof(qwq), 1, p);
    //fwrite fread两个参数都一样,(传进去的变量,变量字节,几个变量,文件指针)
    printf("%d", qwq);
    fclose(p);
    p = NULL;
    return 0;
}