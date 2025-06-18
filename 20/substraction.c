#include <stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int min[3][3];
    int rows, cols;

    printf("Enter rows:");
    scanf("%d", &rows);
    printf("Enter cols:");
    scanf("%d", &cols);
    int i, j;
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
            min[i][j] = a[i][j] - b[i][j];
        }
    }

    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            printf("%5d", min[i][j]);
        }
        printf("\n");
        
    }
    
}