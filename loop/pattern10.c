#include <stdio.h>
int main()
{

    for (int i = 1; i < 6; i++)
    {

        for (int j = 5; j >= i; j--)
        {

            printf("%5d", i);
        }
        printf("\n");
    }
}