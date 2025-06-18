#include <stdio.h>
int main()
{
    int a[6] = {6, 1, 4, 5, 2, 3};
    int length = sizeof(a) / sizeof(a[0]);
    int i, j;

    // Sorting of array
    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Swapping of next two numbers
    for (i = 0; i < length; i += 2)
    {
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }

    for (i = 0; i < length; i++)
    {

        printf("%d", a[i]);
    }
}