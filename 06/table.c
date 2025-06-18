//pattern printing and sorting 
//take access of batch 35
// Time complexity is n2 for two nested loop - time taken by program to execute a program
#include<stdio.h>
int main(){
    int i, j, x, y;
    printf("Enter starting point:");
    scanf("%d", &x);
    printf("Enter ending point:");
    scanf("%d", &y);

    for(i=1; i<=10; i++){ //i is printed once complete j loop is printed and i becomes 11 but condition is false so it will not go in next loop
        for(j=x; j<=y; j++){ //j prints completely from 2 to 5 in one loop and j will become 6 but condition is false so it does print
            printf("%d * %d = %d \t", j, i, (j*i));
        }
            printf("\n");
            //\n is executed everytime when this for is in braces
    }
}