// Array is collection of similar datatype, one variable can store more than one variable
// Variable can store one value in it
// Array is a pointer
#include<stdio.h>
int main(){
    int a[100];
    int i, n;

    printf("Enter a N:");
    scanf("%d", &n);


    // Accept
    printf("Enter elements of array:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }


    // Display
    printf("Given array is:\n");
    for(i=0; i<n; i++){
        printf("\n%d", a[i]);
    }
    return 0;
}