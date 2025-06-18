#include <stdio.h>
int main()
{
    int square = 0;
    int sum = 0;
    int n;

    square = n * n;
    while (square > 0)
    {
        sum += square % 10;
        square /= 10;
    }

    if (sum == n)
    {
        printf("Neon");
    }
    else
    {

        printf("Not Neon");
    }
}