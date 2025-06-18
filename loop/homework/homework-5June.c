#include <stdio.h>
int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1;  j <= 5 ; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");

    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("1");
    //     }
    //     printf("\n");
    // }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i % 2 != 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}