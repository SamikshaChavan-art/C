#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter n:");
    scanf("%d", &n);

    for(i=1; i<=n; i++){ //the i loop is reversed here
        for(j=n; j>=i; j--)
        printf("%d", j); //j is used to print the values 
        printf("\n");
    }
}