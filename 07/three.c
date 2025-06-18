#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter n:");
    scanf("%d", &n);

    for(i=n; i>0; i--){ //the i loop is reversed here
        for(j=0; j<=i; j++)
        printf("%c", 'A'+j); //j is used to increment the A further 
        printf("\n");
    }
}