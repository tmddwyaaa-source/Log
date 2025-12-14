#include <stdio.h>
#include <assert.h>
int my_strlen(const char* arr)
{
    int sum = 0;
    assert(arr);
    while (*arr)
    {
        arr++;
        sum++;
    }
    return sum;
}
int main()
{
    char s[] = "asdfgg";
    printf("%d ", my_strlen(s));
    return 0;
}