#include <stdio.h>
// bubble sort using flag variable
int main()
{
    int a[100], i, j, n;
    int flag;
    printf("Enter N:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    flag = 1;
    i = 0;
    while (flag)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
                flag = 1;
            }
        }
        i++;
    }

    printf("After Sorting:");
    for ( i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}