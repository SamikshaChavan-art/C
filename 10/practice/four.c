#include<stdio.h>
#include<math.h>
int main(){
    int i, n, key, a[100];

    printf("Enter n:");
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    int max = 0;
    int min = a[0];

    for(i=0; i<n; i++){
        max=fmax(a[i], max);
        min=fmin(a[i], min);
    }

    printf("\nMax is %d", max);
    printf("\nMin is %d", min);
    
}