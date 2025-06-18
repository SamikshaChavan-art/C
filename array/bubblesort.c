#include <stdio.h>
int main()
{
    int a[5] = {4, 2, 5, 1, 3};
    int length = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array is:");
    for (int i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
}