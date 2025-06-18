// Neon number is a number whose sum of its own square's digits is equal to the original number
// 9=81=8+1=9

#include <stdio.h>
int main()
{
    int number = 9;
    int square = number * number;
    int neon = 0;

    while (square > 0)
    {

        neon += (square % 10);
        square /= 10;
    }
    if (neon == number)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not a Neon Number");
    }
}