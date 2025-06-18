// rhombus
#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int k = 4; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = 0; j < 5; j++)
        {
            
            printf("*");
        }

        printf("\n");

    }
    return 0;
}