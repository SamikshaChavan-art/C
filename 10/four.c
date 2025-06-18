#include<stdio.h>
int main(){
    int i, n, min, a[100];

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements:");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);

    min=a[0];

    // iterator initiated 1 because at 0 it is already considered to be maximum
    for(i=1; i<n; i++)
    if(min>a[i]){
        min=a[i];
    }

    printf("Max is %d", min);
    return 0;
}