#include<stdio.h>
int main(){
    int n;
    int cnt=0;
    printf("Enter N");
    scanf("%d", &n);
    while (n>0)
    {
        int digits=n%10;
        n=n/10;
        cnt++;
    }
    printf("Number of digits are %d", cnt);
    return 0;
    
}