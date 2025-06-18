#include<stdio.h>
int main(){
    int i, j, n;
    char cnt = 'A';
    printf("Enter n:");
    scanf("%d", &n);

    for(i=0; i<=n; i++){
        for(j=0; j<=i; j++)
        printf("%c", cnt++);
        printf("\n");
    }
}