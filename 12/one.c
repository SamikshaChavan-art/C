// Bubble Sorting
#include<stdio.h>
int main(){
    int a[100], i, j, n;

    printf("Enter n:");
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

        // after the i loop ends 
     for(i=0; i<n; i++){
        // after one j loop ends largest value reaches at the end 
        // on next i iteration second largest value reaches at the end similarly whole sorting occurs.
        
        for(j=0; j<n-i-1; j++){
            if (a[i]>a[j+1])
            {
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
            
        }
     }
     printf("After Sorting:");
     for(i=0; i<n; i++)
        printf("%5d", a[i]);

    return 0;
}