#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, i, n;

    printf("Enter N:");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++, p++)
        scanf("%d", p);

    p--;
    // the pointer goes till next iteration n+1 to bring it on n we use p--
    printf("Display Reverse Array:");
    for (i = 0; i < n; i++, p--)
    {
        printf("%5d", *p);
    }

    return 0;
}