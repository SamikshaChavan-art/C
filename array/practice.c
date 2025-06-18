#include <stdio.h>
int main()
{
    int a[] = {1, 4, 2, 3, 5};
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
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
}