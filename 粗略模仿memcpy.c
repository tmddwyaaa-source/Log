#include <stdio.h>
#include <assert.h>
void* my_memcpy(void* e1, const void* e2, size_t n)
{
    assert(e1 && e2);
    void* ret = e1;
    while (n--)
    {
        *(char*)e1 = *(char*)e2;
        e1 = (char*)e1 + 1;
        e2 = (char*)e2 + 1;
    }
    return ret;
}
int main()
{
    char a[] = "asdfdf";
    char b[20] = { 0 };
    printf("%s",  (char*)my_memcpy(b, a, 6));
    return 0;
}