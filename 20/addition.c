#include <stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int sum[3][3];

    int rows, cols;
    printf("Enter Rows:");
    scanf("%d", &rows);
    printf("Enter Cols:");
    scanf("%d", &cols);

    int i, j;
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }

    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
        
    }

    for ( i = 0; i < rows; i++)
    {
       for ( j = 0; j < cols; j++)
       {
        printf("%5d", sum[i][j]);
       }
       printf("\n");
    }
    
    
    
    
}