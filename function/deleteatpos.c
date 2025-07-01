#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = 10;

    int pos;
    printf("Enter delete at which position?");
    scanf("%d", &pos);
    for (int i = pos; i < length-1; i++)
    {
        a[i] = a[i + 1];
    }

    length--;
    for (int i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
}