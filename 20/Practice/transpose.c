// rows becomes cols and cols becomes rows
#include<stdio.h>
int main(){
    int a[2][3];
    int rows, cols;
    int i, j;

    printf("Enter rows:");
    scanf("%d", &rows);
    printf("Enter cols:");
    scanf("%d", &cols);

    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    int transpose[10][10];
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            transpose[i][j]=a[j][i];
        }
        
    }
    
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            printf("%5d", transpose[i][j]);
        }
        printf("\n");
    }
    
    



}