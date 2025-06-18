#include <stdio.h>
int main()
{
    int n;
    int i = 0;
    int fact = 0;
    printf("Enter N:");
    scanf("%d", &n);

    while (i <= n)
    {
        fact *= i;
        i++;
    }

    printf("Factorial is %d", fact);
}