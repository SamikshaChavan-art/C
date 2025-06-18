#include<stdio.h>
int main(){
    int a[100], i;
    int max, min;
    int largest;
   

    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }

    min=max=a[0];
    for(i=1; i<10; i++){
        if(a[i]>max){
            largest=max;
            max=a[i];
        }
        else if(a[i]<min){
            min=a[i];
        }
    }
printf("Max is %d\n", max);
printf("Min is %d\n", min);
printf("Second largest is %d\n", largest);
return 0;
}