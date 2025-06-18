#include<stdio.h>
int main(){
    int a[100], i, n, key;

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements:");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);

    printf("Enter key to search:");
    scanf("%d", &key);

    for(i=0; i<n; i++){
        if(a[i] == key){
            printf("Key Found");
            return 0; 
            // goes to end of a statement
        }
    }

    printf("Key Not Found");
    // after the loop runs entirely then shows key not found if it was included into for loop it won't go through the whole array
}