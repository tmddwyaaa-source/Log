#include <stdio.h>
#include <assert.h>
void* my_memmove(void* e1, const void* e2, size_t n)
{
    assert(e1 && e2);
    void* ret = e1;
    if (e1 < e2)
    {
        while (n--)
        {
            *(char*)e1 = *(char*)e2;
            e1 = (char*)e1 + 1;
            e2 = (char*)e2 + 1;
        }
   }
    else
    {
        while (n--)
        {
            *((char*)e1 + n) = *((char*)e2 + n);
        }
    }
    return ret;
}
int main()
{
    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int b[20] = { 0 };
    int* x = (int*)my_memmove(a, a+3, 20);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(x+i));
    }
    return 0;
}