#include <stdio.h>
int main()
{
    int i, n, j, key, a[100];

    printf("Enter N:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter Key:");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            // j starts from the iteration where key is found in i
            for (j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
            i--; 
            // i-- to delete adjacent duplicate elements 
            // n-- to reversely shift the element
        }
    }

    printf("After Deletion:");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
}