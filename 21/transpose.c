#include <stdio.h>
// j becomes rows while i becomes cols
int main()
{
    int a[3][3];
    int transpose[3][3];
    int rows, cols, i, j;

    printf("Enter rows:");
    scanf("%d", &rows);
    printf("Enter Cols");
    scanf("%d", &cols);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = a[i][j];
           
        }
       
    }

      for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%5d", transpose[i][j]);
        }
        printf("\n");
    }
}