#include <stdio.h>
int main()
{
    int a[4][3] = {{2, 3, 4}, {5, 6, 7}, {8, 9, 10}, {11, 12, 13}};

    int i, j;
    // rows
    for (i = 0; i < 4; i++)
    {
        // cols
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}