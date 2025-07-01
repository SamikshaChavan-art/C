#include <stdio.h>
#define MAX_INDEX 5
int main()
{

    int a[MAX_INDEX] = {101, 210, 130, 4220, 10};
    int count = sizeof(a) / sizeof(a[0]);
    int *ptr = a;

    for (int i = 0; i < count - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < count; j++)
        {
            if (a[min] > ptr[j])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for (int i = 0; i < count; i++)
    {
        printf("%5d", *(ptr + i));
    }
}