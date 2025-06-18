//to find max of three numbers where nums are unique
//adding > operator
#include<stdio.h>
int main(){
    int n1, n2, n3;
    printf("Enter three numbers:");
    scanf("%d%d%d", &n1, &n2, &n3);
    if(n1>n2 && n1>n3){ //10>10 becomes 0
        printf("%d is greater", n1);
    }
    else if(n2>n1 && n2>n3){ //10>10 becomes 0
        printf("%d is greater", n2);
    }
    else{ //this else block prints
        printf("%d is greater", n3);
    }
}
//shows problem when two same values are the input 
//10, 10 and 5