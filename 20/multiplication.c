#include <stdio.h>
int main()
{
    int a[2][2];
    int b[2][2];
    int rows, cols;
    int mul[2][2];

    printf("Enter rows:");
    scanf("%d", &rows);
    printf("Enter cols:");
    scanf("%d", &cols);

    int i, j, k;
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
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            mul[i][j] = 0;
        }
    }

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            for ( k = 0; k < 2; k++)
            {
               mul[i][j]+=a[i][k]*b[k][j];
            }
            
        }
        
    }
    

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%5d", mul[i][j]);
        }
        printf("\n");
    }
}