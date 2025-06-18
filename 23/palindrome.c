#include <stdio.h>
int main()
{
    int n;
    int result = 0;
    int remain;
    printf("Enter N:");
    scanf("%d", &n);
    int temp = n;
    
    while (n > 0)
    {
        remain = n % 10;
        result = result * 10 + remain;
        n = n / 10;
    }
    if (temp == result)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    return 0;
}