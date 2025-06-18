#include<stdio.h>
int main(){
    int i, n, key, a[100];
    int cnt=0;

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements in array:");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);

    
    printf("Enter key:");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    if(a[i]==key){
        cnt++;
    }
    if(cnt==0){
        printf("Element not found!!");
    }
    else{
        printf("Element %d is found %d times in this array", key, cnt);
    }
    return 0;

}