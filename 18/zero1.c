#include <stdio.h>
int main()
{
    int a[100], n, i, j;

    printf("Enter N:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("After sorting:");
    for ( i = 0; i < n; i++)
    {
       printf("%5d", a[i]);
    }
    
}