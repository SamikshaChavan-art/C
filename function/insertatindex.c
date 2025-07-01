#include <stdio.h>
// return type and with parameter
// no return and with parameter
// no return and no parameter
void insert(int a[], int n)
{
    int pos, key;
    printf("Enter pos and key:");
    scanf("%d%d", &pos, &key);

    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = key;
    n + 1;
}

int main()
{
    int a[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = 10;
    insert(a, length);
    for (int i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
}