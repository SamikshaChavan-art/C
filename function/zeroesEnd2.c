#include <stdio.h>
void moveZeroes(int arr[], int n)
{
    int a=0;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
           count++;
        }

        if (arr[i]!=0)
        {
            arr[a]=arr[i];
            a++;
        }
    }
    while (count>0)
    {
        arr[a++]=0;
        count--;
    }
    
    
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}
int main()
{
    int arr[10];
    int n;
    printf("Enter N:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    moveZeroes(arr, n);
    display(arr, n);
}