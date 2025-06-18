#include<stdio.h>
#include<math.h>
int main(){
    int i, n, key, ch, a[100];
    int flag, cnt;

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter elements of array:");
    for(i=0;i<n;i++){
    scanf("%d", &a[i]);
    }

   
    while(1){
        printf("\n1. Display Array \n2. Max \n3. Min \n4. Search \n5. Frequency");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            for(i=0; i<n; i++){
                printf("\n%d", a[i]);
            }
            break;
            case 2:
            int max=0;
            for(i=1; i<n; i++){
                max=fmax(a[i], max);
            }
            printf("Max is %d", max);
            break;
            case 3:
            int min=a[0];
             for(i=1; i<n; i++){
                min=fmin(a[i], min);
            }
            printf("Min is %d", min);
            break;
            case 4: 
            printf("Enter key:");
            scanf("%d", &key);
            flag=0;
            for(i=0; i<n; i++){
                if(a[i]==key){
                    flag=1; 
                }
            }
            if(flag=1){
                printf("Found!!");
            }
            else{
                printf("Not Found!!");
            }
            break;
            case 5:
            printf("Enter key:");
            scanf("%d", &key);
            cnt=0;
            for(i=0; i<n; i++){
                if(a[i]==key){
                    cnt++; 
                }
            }
            if(cnt>0){
                printf("Frequency is %d!!", cnt);
            }
            else{
                printf("Not Found!!");
            }
            break;
            case 6:
            return 0;
            default:
            printf("Invalid choice!!!");

        }
    }
}