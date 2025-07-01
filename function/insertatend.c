#include <stdio.h>
int main()
{
    int a[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = 10;

    int key;
    printf("Enter key:");
    scanf("%d", &key);

    a[length] = key;
    length++;

    for (int i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
}