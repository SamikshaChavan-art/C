#include <stdio.h>
int main()
{
    int n;
    printf("Enter Length of Array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Values of Array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Values from the Array:");
    for (int i = 0; i < len; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}