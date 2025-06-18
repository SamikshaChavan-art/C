#include<stdio.h>
int main(){
    int i, j, n, a[100];
    int temp;
    printf("Enter n");
    scanf("%d", &n);
    printf("Enter 5 elements for array:");
    for(i=0; i<5; i++)
    scanf("%d", &a[i]);

    for(i=0; i<5; i++){
        for(j=0;j<5;j++){
            temp=a[0];
            a[0]=a[n-1];
            printf("%5d",a[j]);
        }
        printf("\n");
    }

}