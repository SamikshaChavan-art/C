#include <stdio.h>
int main()
{
    int a[10][10];
    int b[10][10];
    int mul[10][10];
    int rows, cols;
    int i, j, k;

    printf("Enter rows:");
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

    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            mul[i][j]=0; 
            // Garbage collection
        }
        
    }

    for ( i = 0; i < 3; i++)
    {
        for (j  = 0; j < 3;j ++)
        {
           for ( k = 0; k < 3; k++)
           {
            mul[i][j]+=a[i][k]*b[k][j];
           }
           
        }
        
    }

    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            printf("%5d", mul[i][j]);
        }
        printf("\n");
    }
    
    
    
}