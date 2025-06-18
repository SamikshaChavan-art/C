#include <stdio.h>
int main()
{
    int a[10];
    int n, i;

    printf("Enter N:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = -1;
    int secondmax = -1;
    for (i = 0; i < n; i++)
    {
        max = a[0];
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] > secondmax && a[i] != max)
        {
            secondmax = a[i];
        }
    }

    printf("Second Largest %d", secondmax);
}