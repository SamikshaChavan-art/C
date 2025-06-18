#include <stdio.h>
int main()
{
    int rows, cols, i, j;
    int a[50][50];

    printf("Enter rows:");
    scanf("%d", &rows);
    printf("enter cols");
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
        // cols
        for (j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

// Addition ,Substraction, Multiplication and Transpose