#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = 10;
    for (int i = 0; i < length; i++)
    {
        a[i] = a[i + 1];
    }
    length--;
    for (int i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
}