#include<stdio.h>
int main(){
    int a[5]={2,3,1,7,4};
    int length=sizeof(a)/sizeof(a[0]);

    int i, j;
    for ( i = 0; i < length; i++)
    {
        for ( j = 0; j < length-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }

    printf("After sorting:");
    for ( i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
    
    

    
}