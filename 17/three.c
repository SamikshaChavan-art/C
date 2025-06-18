#include <stdio.h>
int main()
{
    int *p;
    int a[100], n, i;

    p = &a[0];
    // Base Address

    printf("enter n:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);

    printf("\nGive data is:\n");
    for (i = 0; i < n; i++)
        printf("%5d", p[i]);
    return 0;
}