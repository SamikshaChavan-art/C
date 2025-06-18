#include <stdio.h>
int main()
{
    int a[5] = {2, 3, 4, 5, 6};
    int length = 5;

    int pos, key;
    printf("Enter pos:");
    scanf("%d", &pos);

    for (int i = pos; i < length - 1; i++)
    {
        a[i] = a[i + 1];
    }

    length--;
    for (int i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
}