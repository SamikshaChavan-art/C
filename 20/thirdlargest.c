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
    int thirdlargest = -1;

    for (i = 0; i < n; i++)
    {
        if (a[i] > thirdlargest && a[i] != secondmax && a[i] != max)
        {
            thirdlargest = a[i];
        }
    }

    int mul = 0;
    mul = max * secondmax * thirdlargest;

    printf("Maximun is %d\n", max);
    printf("Second Largest %d\n", secondmax);
    printf("Third Largest %d", thirdlargest);
    printf("Multiplication %d", mul);
}