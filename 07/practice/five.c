#include<stdio.h>
int main(){
    int i, j, n;
    printf("Enter n:");
    scanf("%d", &n);

    for(i=n; i>=1; i--){
        for(j=2; j<=i; j++){
        if(i==n || j==2){
            printf("#");
        }
        else{
            printf("*");
        }
    }
        printf("#\n");
    }
}
