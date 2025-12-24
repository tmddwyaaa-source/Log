int main()
{
    FILE* file = fopen("C:\\Users\\tmddw\\Desktop\\text.txt", "r");
    if (file == NULL)
    {
        perror("fopen");
        return;
    }
    //fseek函数是改变文件指针的,把这个指针指针改成文件内容的某个地址
    printf("fseek函数\n");
    fseek(file, 2, SEEK_SET);//SEEK_SET 文件内容最前面的地址，即初始地址
    char att = fgetc(file);
    printf("%c\n", att);
    fseek(file, 2, SEEK_CUR);//SEEK_CUR 文件内容最中间的地址，即中间地址
    att = fgetc(file);
    printf("%c\n", att);
    fseek(file, -1, SEEK_END);//SEEK_END 文件内容最后面的地址，即末尾地址
    att = fgetc(file);
    printf("%c\n", att);
    //ftell函数是返回文件指针和最开始地址的偏移值
    printf("ftell函数\n");
    printf("%d \n", ftell(file));
    //rewind函数是让文件指针初始化,即让指针回到它的起始地址
    printf("rewind函数\n");
    rewind(file);
    att = fgetc(file);
    printf("%c\n", att);
    fclose(file);
    file = NULL;
    return 0;
}