#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        int print = i;
        for (int j = 5; j >= i; j--)
        {

            printf("%5d", print++);
        }
        printf("\n");
    }
}