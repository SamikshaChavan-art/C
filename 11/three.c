#include <stdio.h>
#include<math.h>
int main()
{
    int i, a[10];
    int n = 10;
    
    // Accept Array
    printf("Enter 10 elements in array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum=0;
    for(i=0;i<n;i++)
        sum+=a[i];
    printf("\nSum is %d", sum);

    int avg=0;
    avg=sum/n;
    printf("\nAvg of array is %d", avg);

    int max=0;
    for(i=0;i<n;i++)
        max=fmax(a[i], max);
    printf("\nMax is %d", max);

    int min=a[0];
    for(i=0;i<n;i++)
        min=fmin(a[i], min);
    printf("\nMin is %d", min);
    
}