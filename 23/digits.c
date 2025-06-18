#include <stdio.h>
int main()
{
    int n;
    printf("Enter N:");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Digits are 0");
    }
    else
    {
        while (n > 0)
        {
            int digits = n % 10;
            printf("digits are %d\n", digits);
            n /= 10;
        }   
    }

    return 0;
}