#include<stdio.h>
int main(){
    int i, n, key, a[100];

    printf("Enter N:");
    scanf("%d", &n);
    printf("Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    int max = 0;
    int min = a[0]; 
    for(i=0; i<n; i++){
        if(max<=a[i]){
            max=a[i];
        }
    }
    printf("\nMax is %d", max);

     for(i=0; i<n; i++){
        if(min>=a[i]){
            min=a[i];
        }
    }
    printf("\nMin is %d", min);
    
}