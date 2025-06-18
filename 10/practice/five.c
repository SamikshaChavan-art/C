#include<stdio.h>
int main(){
    int i, n, a[100], key;
    int cnt=0;

    printf("Enter N:");
    scanf("%d", &n);
    printf("Enter elements of array:");
    for ( i = 0; i < n; i++)
       scanf("%d", &a[i]);
    printf("Enter key:");
    scanf("%d", &key);

    for(i=0; i<n; i++){
        if(a[i]==key){
            cnt++;
        }
    }
    printf("Frequency of %d is %d", key, cnt);
    
    
}