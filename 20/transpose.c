#include <stdio.h>
int main()
{
    int a[3][3] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}};
    int b[3][3];

    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", b[i][j]);
        }
        printf("\n");
    }
}