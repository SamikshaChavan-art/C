#include <stdio.h>
int main()
{
    int a = 2;
    int b = 2;

    while (b <= 100)
    {
        int a = 2;
        int isPrime = 1;
        while (a <= b / 2)
        {
            if (b % a == 0)
            {
                isPrime = 0;
                break;
            }
            a++;
        }
        if (isPrime)
        {
            printf("%5d", b);
        }

        b++;
    }
}