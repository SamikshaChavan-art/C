#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf(" ");
        }

        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            if (i == 5 || j == 1 || j == (i * 2) - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
