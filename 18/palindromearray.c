#include <stdio.h>
int main()
{
    int a[100], n, i, j;

    printf("Enter N:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            printf("Array is not a Palindrome");
            return 0;
        }
    }

    
        printf("Array is s palindrome");
    
}