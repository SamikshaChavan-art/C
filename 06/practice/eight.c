#include<stdio.h>
int main(){
    int i, j, k, n;
    printf("Enter n:");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            for ( k=1; k <= j; k++)
            {
                printf("\t");
                printf("*");

            }
            
            
        }
        printf("\n");
    }
}