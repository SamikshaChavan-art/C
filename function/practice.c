#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * (factorial(n - 1));
}
int main()
{
    int num = 5; // 120
    int fact = factorial(num);
    printf("Factorial using recursion comes to be: %d", fact);
}