#include <stdio.h>
int main()
{
    int a[5] = {7, 5, 2, 32, 1};
    int length = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i <= length - 1; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            int temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            j--;
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
}