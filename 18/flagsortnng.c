#include <stdio.h>
int main()
{
    int a[100], i, n, j, key;

    printf("Enter N:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter key:");
    scanf("%d", &key);

    int flag = 1;
    i = 0;
    while (flag)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        i++;
    }

    int l = 0;
    int r = n - 1;
    while (r > l)
    {
        int mid = ((l + r) / 2);
        if (a[mid] == key)
        {
            printf("FOUND!!");
            return 0;
        }
        else if (key>a[mid])
        {
            l=mid+1;
        }
        else if (key<a[mid])
        {
            r=mid-1;
        }
    }

    printf("Not Found");
   
}