#include <stdio.h>

void moveZeroToStart(int arr[], int n)
{
    int a = n - 1; 
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != 0)
        {
            arr[a--] = arr[i];
        }
    }
    while (a >= 0)
    {
        arr[a--] = 0;
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10];
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    moveZeroToStart(arr, n);
    printf("Array after moving zeros to start:\n");
    display(arr, n);

    return 0;
}
