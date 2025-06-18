#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p, n, i;

    printf("Enter a N:");
    scanf("%d", &n);

    p=(int *)calloc(n, sizeof(int));
    
    for ( i = 0; i < n; i++)
        scanf("%d", &p[i]);

    for ( i = 0; i < n; i++)
        printf("%5d", p[i]);
    return 0;
}