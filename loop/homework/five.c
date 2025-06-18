#include<stdio.h>
int main(){
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i==3||j==6)
            {
                printf("* ");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    
}