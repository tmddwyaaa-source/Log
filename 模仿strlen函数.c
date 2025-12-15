#include <stdio.h>
#include <assert.h>
unsigned int my_strlen1(const char* a)
{
    assert(a);
    unsigned int sum = 0;
    while (*a)
    {
        a++;
        sum++;
    }
    return sum;
}
unsigned int my_strlen2(char* a)
{
    assert(a);
    char* b = a;
    while (*b != '\0')
        b++;
    return b - a;
}
unsigned int my_strlen3(const char* a)
{
	assert(a);
    if (*a == '\0')
    {
        return 0;
    }
    else
        return 1 + my_strlen3(a + 1);
}
int main()
{
    char a[] = "sdfsdfs";
    printf("%u", my_strlen3(a));
    return 0;
}

