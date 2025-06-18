#include <stdio.h>
int main()
{
    int a[100], i, n, key;
    printf("Enter N:");
    scanf("%d", &n);
    printf("Enter element:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter key:");
    scanf("%d", &key);

    int l = 0;
    int h = n - 1;
    int flag=0;
    while (h > l)
    {
        int mid = ((l + h) / 2);
        if (a[mid] == key)
        {
            printf("Found");
            return 0;
        }
       else if (key > a[mid])
       {
        l=mid+1;
       }
       else if (key < a[mid])
       {
        h=mid-1;
       }
    }

    printf("Not Found");

    
     
}
