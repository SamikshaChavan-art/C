#include<stdio.h>
int main(){
    int a[100];
    int i, n, sum = 0;

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements of array:");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(i=0; i<n; i++)
         sum+=a[i];
         printf("Sum: %d", sum);
}