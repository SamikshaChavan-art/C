#include <stdio.h>
int main()
{
    int rem, n;
    int rev = 0;
    int temp;
    printf("Enter N:");
    scanf("%d", &n);
    temp = n;
    int cnt=0;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10+ rem;
        n = n / 10;
        cnt++;
    }

    printf("Reverse is %d\n", rev);
    printf("Number of digits are %d \n", cnt);
    if (rev == temp)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}