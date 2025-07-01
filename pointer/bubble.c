#include <stdio.h>
#define MAX_INDEX 5
int main()
{

    int a[MAX_INDEX] = {101, 210, 130, 4220, 10};
    int count = sizeof(a) / sizeof(a[0]);
    int *ptr = a;

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count-i-1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                int temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%5d", *(ptr+i));
    }
    
}