#include<stdio.h>
int main(){
    int i, n, a[100], key;
    int flag=0;

    printf("Enter N:");
    scanf("%d", &n);
    printf("Enter elements of array:");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter key");
    scanf("%d", &key);

    for(i=0; i<n; i++){
        if(a[i]==key){
            flag=1;
        }
    }


    if(flag){
        printf("Key found");
    }
    else{
        printf("Key not found");
    }
    
}