#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 0 || i == 3 || i == 6)
            {
                if (j > 0)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else if (i == 1 || i == 2)
            {
                if (j == 0)
                {
                    printf("*");
                }
                else if(j==4 && i!=2){
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else if (i == 4 || i == 5)
            {
                if (j == 4)
                {
                    printf("*");
                }
                else if(j==0 && i!=4){
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}