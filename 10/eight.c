#include<stdio.h>
int main()
{
    int i, n, a[100], en, on, even[100], odd[100];
    en=on=0;

    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter elements of array:");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);

    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even[en]=a[i];
            en++; 
        }
    else{
            odd[on]=a[i];
            on++;
        }
    }

    if(en>0){
        printf("\nEven Numbers are:\n");
        for(i=0;i<en;i++){
            printf("\n%d", even[i]);
        }
    }

    if(on>0){
        printf("\nOdd Numbers are:\n");
        for(i=0;i<on;i++){
            printf("\n%d", odd[i]);
        }
    }
    return 0;
}