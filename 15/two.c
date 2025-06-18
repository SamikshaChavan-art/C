#include<stdio.h>
// header or prototype
int sub(int a, int b){
    // > is greater than
    if(a>b){ 
        return(a-b);
    }
    else{
        return(b-a);
    }
    
}
int main(){
    int a, b;
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    printf("Substraction is %d", sub(a, b));
    return 0;
}