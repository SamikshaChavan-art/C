// flag used for yes or no i.e 0 or 1
#include<stdio.h>
int main(){
    int i, n, key, a[100];
    int flag=0;
    printf("Enter n:");
    scanf("%d", &n); 

    printf("Enter elements in array:");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);

    printf("Enter key:");
    scanf("%d", &key); 

    for(i=0; i<n; i++){
        if(a[i]==key){
            flag=1;
            break;
        }
    }

    if(flag){
        printf("FOUND!!");
    }
    else{
        printf("NOT FOUND!!");
    }
    return 0;

}