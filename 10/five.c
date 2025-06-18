#include<stdio.h>
#include<math.h>
int main(){
    int i, n, max, a[100];

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements:");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);

    max=a[0];

    // iterator initiated 1 because at 0 it is already considered to be maximum
    for(i=1; i<n; i++) 
    max=fmax(a[i], max);

    printf("Max is %d", max);
    return 0;
}