#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            if ( j == 1 )
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}