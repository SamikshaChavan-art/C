#include<stdio.h>
int main(){
    int r, q, o, n;
    int s=0;

    printf("Enter a number:");
    scanf("%d", &n);

    q=n;
    while (q!=0)
    {
        r=q%10;
        s=(s*10)+r;
        q=q/10;
    }

    if (s==n)
    {
       printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    
    
}