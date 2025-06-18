#include<stdio.h>
int main(){
    int a[100], b[100], i, n;
    int cnt=0;

    printf("Enter N:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for ( i = 0; i < n; i++)
    {
        if (a[i]==0)
        {
            b[cnt]=a[i];
            cnt++;
        }
    }

     for ( i = 0; i < n; i++)
    {
        if (a[i]==1)
        {
            b[cnt]=a[i];
            cnt++;
        }
    }

    for (i = 0; i < n; i++)
        printf("%d", b[i]);
    
}