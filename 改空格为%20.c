#include <stdio.h>
char* xiugai(char* arr, int len)
{
    char* tidai = arr;
    char* tidai2 = arr;
    int space_count = 0;
    while (*tidai)
    {
        if (*tidai == ' ')
        {
            space_count++;
        }
        tidai++;
    }
    int end1 = len - 1;
    int end2 = len + space_count * 2 - 1;
    while (end1 != end2)
    {
        if (arr[end1] != ' ')
        {
            arr[end2--] = arr[end1--];
        }
        else
        {
            end1--;
            arr[end2--] = '0';
            arr[end2--] = '2';
            arr[end2--] = '%';
        }
    }
    return tidai2;
}
int main()
{
    char arr[20] = "so trust me!";
    int len = strlen(arr);
    printf("%s\n", xiugai(arr, len));
    return 0;
}