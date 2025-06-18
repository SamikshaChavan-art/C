#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i, j, temp;

    for (i = 0; i < 5; i++)
    {

        temp = a[4];
        for (j = 4; j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = temp;

        for (j = 0; j < 5; j++)
        {
            printf("%5d", a[j]);
        }
        printf("\n");
    }
    return 0;
}