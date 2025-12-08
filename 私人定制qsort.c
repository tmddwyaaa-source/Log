#include <stdio.h>
//私人定制qsort
int cmp_int(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}

void Swap(char* e1, char* e2, int width)
{
    int i = 0;
    for (i = 0; i < width; i++)
    {
        char x = *e1;
        *e1 = *e2;
        *e2 = x;
        e1++;
        e2++;
    }
}
 
void my_qsort(void* arr, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
    int flag = 1;
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (cmp((char*)arr+j*width,(char*)arr+(j+1)*width)>0)
            {
                Swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
                flag = 0;
            }

        }
        if (flag == 1)
        {
            break;
        }
    }
}

int main()
{
    int arr[10] = { 2,4,6,7,1,5,9,10,8,3 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    my_qsort(arr, sz, sizeof(arr[0]), cmp_int);
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}