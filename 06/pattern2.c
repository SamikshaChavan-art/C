#include<stdio.h>
int main(){
    int i, j, n;
    int cnt=1;
    printf("Enter n:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        printf("%3d", cnt++); //cnt variable is used to print numbers inside the printf
        printf("\n");
    }
}