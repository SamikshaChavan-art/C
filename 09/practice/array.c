#include<stdio.h>
int main(){
    int i, n;
    int a[100];

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements of n:");
    for(i=1; i<=n; i++){
    scanf("%d", &a[i]);
    }

    for(i=1; i<=n; i++){
        printf("\n%d", a[i]);
    }
}