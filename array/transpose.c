#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3}, {4,5,6},{7,8,9}};
    int transpose[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[i][j]=a[j][i];
        }
       
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("%5d", transpose[i][j]);
        }
        printf("\n");
        
    }
    
}