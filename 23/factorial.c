#include<stdio.h>
int main(){
    int n;
    int fact=1;
    printf("Enter N:");
    scanf("%d", &n);
    int i = 1;
    while (i<n)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial is %d", fact);
    return 0;
}