#include <stdio.h>
int main()
{
    int a[10][10];
    int rows, cols;
    int i, j;
    int transpose[10][10];

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
int symmetric=0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[i][j] = a[j][i];
            if (a[i][j] == transpose[i][j])
            {
            symmetric=1;
            }
            else
            {
                symmetric=0;
            }
        }
    }

    if (symmetric)
    {
        printf("Symmetric Array");
    }
    else{
         printf("Asymmetric Array");
    }
    
}
// Rotate Matrix by 90 Degrees, Spiral Order Traversal, Sum of Diagonals in a Square Matrix