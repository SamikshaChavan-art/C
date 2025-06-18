#include<stdio.h>
// header or prototype
int div(int a, int b){
    // > is greater than
    if(a>b){ 
        return(a/b);
    }
    else{
        return(b/a);
    }
    
}
int main(){
    int a, b;
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    printf("Division is %d", div(a, b));
    return 0;
}