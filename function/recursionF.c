#include<stdio.h>
void fibonnaci(int first, int second, int count, int n){
    if (count>=n)
    {
        return;
    }
    int next=first+second;
    printf("%5d", next);
    fibonnaci(second, next, count+1, n);
    
}
int main(){
int first=0;
int second=1;
int n=10;
printf("%5d%5d", first, second);
fibonnaci(first, second, 2, n);
}