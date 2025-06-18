#include <stdio.h>
// Input print, add min mul, transpose
int main()
{
    int a[10][10];
    int b[10][10];
    int rows, cols;
    int i, j;

    printf("Enter Rows:");
    scanf("%d", &rows);
    printf("Enter Cols:");
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
            scanf("%d", &b[i][j]);
        }
    }


    int add[10][10];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        }
    }

    
    int sub[10][10];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
 
    printf("Addition is:");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%5d", add[i][j]);
        }
        printf("\n");
    }

    printf("Substraction is:");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%5d", sub[i][j]);
        }
        printf("\n");
    }
    
}