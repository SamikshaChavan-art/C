#include <stdio.h>
#include "array.h"
int main()
{
    int a[100], n, i, j;

    printf("Enter N:");
    scanf("%d", &n);
    accept(a, n);

    sort(a, n);

    printf("\nAfter Sorting:");
    display(a, n);
}