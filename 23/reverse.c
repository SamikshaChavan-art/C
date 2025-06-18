#include <stdio.h>
int main()
{
    int n;
    printf("Enter N:");
    scanf("%d", &n);
    int result = 0;

    while (n > 0)
    {
        int remain = n % 10;
        result = result * 10 + remain;
        n /= 10;
    }
    printf("Reversed Number is %d", result);
    return 0;
}