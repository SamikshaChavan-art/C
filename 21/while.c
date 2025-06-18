#include<stdio.h>
int main(){
    int a=1;
    while (a<=20)
    {
        if (a<5)
        {
            printf("%d\n", ++a);
        }
        else{
            printf("%d\n", a++);
        }
        printf("%d\n", ++a);
        a++;
    }
    
}