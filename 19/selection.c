#include <stdio.h>
int main()
{
    int a[5] = {2, 7, 1, 8, 5};
    int length = sizeof(a) / sizeof(a[0]);

    int i, j;
    for (i = 0; i < length-1; i++)
    {
        int min = i;
        for (j = i + 1; j < length; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    printf("After Sorting");
    for (i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
}