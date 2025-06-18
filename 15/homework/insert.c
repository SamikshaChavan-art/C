#include <stdio.h>
#include "array.h"
int main()
{
    int a[100], n, i, key, pos;

    printf("Enter N:");
    scanf("%d", &n);
    accept(a, n);
    printf("Enter pos:");
    scanf("%d", &pos);
    printf("Enter key:");
    scanf("%d", &key);

    insert(a, n, pos, key);
    n++;

    printf("\nAfter Inserting: \n");
    display(a, n);
    
}