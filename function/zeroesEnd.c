#include <stdio.h>
void moveZeroes(int arr[], int n)
{
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[a] = arr[i];
            a++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[a] = arr[i];
            a++;
        }
    }
}
int main()
{
    int a[10];
    int n;
    printf("Enter N:");
    scanf("%d", &n);
    printf("Enter Array Elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    moveZeroes(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    
}