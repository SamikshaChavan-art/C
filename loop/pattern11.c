#include <stdio.h>
int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            if (i % 2 != 0)
            {
                printf("%5d", (j % 2 == 0 ? 0 : 1));
            }
            else
            {
                printf("%5d", (j % 2 == 0 ? 1 : 0));
            }
        }
        printf("\n");
    }
}