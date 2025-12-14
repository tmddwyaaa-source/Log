#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* att, const char* arr)
{
    char* len = att;
    assert(att && arr);
    while (*att++ = *arr++)
    {
        ;
    }
    *att = *arr;
    return len;
}
int main()
{
    char arr[] = "asdfgg";
    char att[20] = { 0 };
    
    printf("%s\n", my_strcpy(att, arr));
    return 0;
}