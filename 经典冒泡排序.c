#include <stdio.h>
//经典冒泡排序
int main()
{
	int arr[10] = { 1,3,4,5,2,7,9,10,6,8 };
    int i = 0;
	int flag = 1;
    for (i = 0; i < 10; i++)
    {
        int j = 0;
        for (j = 0; j < 10-i; j++)
        {
            if (arr[j+1] > arr[j])
            {
                int x = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = x;
				flag = 0;
            }
        }
		if(flag == 1)
		{
			break;
    }
	for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

