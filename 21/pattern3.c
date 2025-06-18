#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == 0 || i == 2)
            {
                if (j > 0)
                {
                    printf("*");
                }
            }
            else if (i == 1||i==2)
            {
                if (j == 0 || j == 2)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else if (i == 3 || i == 4)
            {
                if (j = 0)
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
}