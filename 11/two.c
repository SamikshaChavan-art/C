#include <stdio.h>
int main()
{
    int i, a[10];
    int n = 10;
    int c1, c2, c3, c4;
    c1=0;
    c2=0;
    c3=0;
    c4=0;
    // Accept Array
    printf("Enter 10 elements in array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if((a[i]%5==0) && (a[i]%3==0)){
            c1++;
        }
        else if(a[i]%3==0){
            c2++;
        }
        else if(a[i]%5==0){
            c3++;
        }
        else{
            c4++;
        }
    }
    printf("\nElements in array divisble by 3 and 5 are %d", c1);
    printf("\nElements in array divisble by 3 are %d", c2);
    printf("\nElements in array divisble by 5 are %d", c3);
    printf("\nElements in array not divisble by 3 and 5 are %d", c4);
}