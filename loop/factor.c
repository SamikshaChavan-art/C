#include<stdio.h>
int main(){
    int n, a=1;
    printf("Enter N:");
    scanf("%d", &n);
    while (a<=n/2)
    {
        if (n%a==0)
        {
            printf("Factors are %d\n", a);
        }
        a++;
    }
    
}