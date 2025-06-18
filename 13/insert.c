#include <stdio.h>
int main()
{
    int i, n, a[100], pos, key;

    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position:");
    scanf("%d", &pos);

    printf("Enter key:");
    scanf("%d", &key);

    // 
    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = key;
    n++;

    printf("After insertion");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    return 0;
}