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
      if(a[i]%2==0){
        printf("\nEven %d", a[i]);
       }
      }

    return 0;
}