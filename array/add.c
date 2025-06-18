#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter rows and cols:");
    scanf("%d%d", &rows, &cols);
    int a[rows][cols];
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int b[rows][cols];
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int c[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }
}