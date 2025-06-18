#include<stdio.h>
int main(){
    int i, j, n;
    printf("Enter n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){ //in 1st loop 
        for(j=1; j<=i; j++) // * is printed 1 times and so on values are reset once control goes to i
        // printf("*");
        printf("%d", j);
        printf("\n");
    }
}