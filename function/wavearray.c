#include <stdio.h>
void sorting(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void display(int arr[], int n)
{
    printf("Values are:");
    for (int i = 0; i < n; i++)
    {

        printf("%5d", arr[i]);
    }
}
int main()
{
    int arr[20];
    int n;
    printf("Enter N:");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sorting(arr, n);
    display(arr, n);
}