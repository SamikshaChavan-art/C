#include <stdio.h>
int main()
{
    int a[5] = {3, 6, 2, 9, 10};
    int length = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < length; i++)
    {
        int min = i;
        for (int j = i + 1; j < length; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
}