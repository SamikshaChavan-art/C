#include <stdio.h>
int main()
{
    int a[6] = {1, 2, 3, 4, 5};
    int length = 5;

    int pos;
    printf("Enter Position:");
    scanf("%d", &pos);
    int key;
    printf("Enter Key:");
    scanf("%d", &key);
    for (int i = length; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = key;
    length++;
    for (int i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
}

// insert at end
// insert at start
