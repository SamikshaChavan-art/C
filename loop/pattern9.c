#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    {
     
        for (int j = 5; j >= i; j--)
        {
               int print = j;
            printf("%5d", print++);
        }
        printf("\n");
    }
}