#include <stdio.h>
#define MAX_INDEX 5
int main()
{

    int a[MAX_INDEX] = {101, 210, 130, 4220, 10};
    int count = 5;
    int *ptr = a;

    int pos;
    printf("Enter position:");
    scanf("%d", &pos);
  

    for (int i = pos-1; i < count; i++)
    {
        ptr[i]=ptr[i+1];
    }
    count--;

    for (int i = 0; i < count; i++)
    {
        printf("%5d", *(ptr+i));
    }
}