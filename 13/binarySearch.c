#include <stdio.h>
int main()
{
    int i, j, n, key, l, h, mid, a[100];

    // Accept array and key
    printf("Enter N:");
    scanf("%d", &n);
    printf("Enter element:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter Key:");
    scanf("%d", &key);

    // Sort array
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

    // Binary Search Algorithm
    l = 0;
    h = n - 1;
    while (h > l)
    {
        mid = (l + h) / 2;
        if (a[mid] == key)
        {
            printf("Found");
            return 0; 
            // it will print found infinite times we must stop execution of the program.
        }
        else if (a[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    printf("Not found");
}