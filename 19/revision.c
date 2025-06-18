#include<stdio.h>
int main(){
    int a[5] = {23, 2, 9, 87, 6};
    int length = sizeof(a)/sizeof(a[0]);

    int i, j;
    // Selection Sort where min is checked at the last 
    // for ( i = 0; i < length-1; i++)
    // {
    //     int min=i;
    //     // i+1 means next the element is being checked instead of checking with itself
    //     for ( j = i+1; j < length;j++)
    //     {
    //         if (a[min]>a[j])
    //         {
    //             min=j;
    //         }   
    //     }
    //     int temp = a[i];
    //     a[i]=a[min];
    //     a[min]=temp;
    // }

    // Bubble Sort
    // for ( i = 0; i < length; i++)
    // {
    //     for ( j = 0; j < length-i-1; j++)
    //     {
    //        if (a[j]>a[j+1])
    //        {
    //         int temp=a[j];
    //         a[j]=a[j+1];
    //         a[j+1]=temp;
    //        }
           
    //     }
        
    // }
    
    // Insertion Sort
    



    printf("After Sorting:");
    for ( i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
    
    

}