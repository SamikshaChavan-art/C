#include<stdio.h>
int main(){
    int i, j, n;
    printf("Enter n:");
    scanf("%d", &n);

    for(i=n; i>0; i--){
        for(j=2; j<=i; j++) //the 2 allows no * for 5th iteration this way # can be printed alone
        printf("*");
        printf("#\n");
    }
}