#include <stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
          char ch = 'A';
        for (int j = 10; j >= i; j--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
          
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}