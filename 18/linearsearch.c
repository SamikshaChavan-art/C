#include <stdio.h>
int main()
{
    int a[100], n, i, key;

    printf("Enter N:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter key:");
    scanf("%d", &key);

    for ( i = 0; i < n; i++)
    {
        if (a[i]==key)
        {
            printf("FOUND!!!");
            return 0;
        }
        
    }
    printf("NOT FOUND!!!");
    
}