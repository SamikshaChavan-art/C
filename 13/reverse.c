#include<stdio.h>
int main(){
    int a[100], i, n;

    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter elements:");
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
    
    // Dividing the array in half and apply the logic in half the array
    for ( i = 0; i < n/2; i++) 
    {
        // We are simply swapping the first element with last element with iteration it will be reversed
        int temp = a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }

    printf("Array after reversing:");
    for ( i = 0; i < n; i++)
        printf("%5d",a[i]);
return 0;
}