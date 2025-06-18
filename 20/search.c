#include <stdio.h>
int main()
{
    int a[10][10];
    int i, j;
    int key;
    int rows, cols;
    int found = 0;

    printf("Enter rows:");
    scanf("%d", &rows);
    printf("Enter cols:");
    scanf("%d", &cols);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter key:");
    scanf("%d", &key);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (a[i][j] == key)
            {
                printf("Found!!!");
                found = 1;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    if(!found){
        printf("Not Found!!");
    }
}