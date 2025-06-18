#include<stdio.h>
int main(){
    int i, n;
    int a[100];

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements of array:");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);

    for(i=0; i<n; i++)
    {
    if(a[i]%2==0){
        printf("Even is %d \n", a[i]);
    }
}
}