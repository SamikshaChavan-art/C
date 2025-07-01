#include <stdio.h>
#define MAX_INDEX 5
int main()
{

    int a[MAX_INDEX] = {101, 210, 130, 4220, 10};
    int count = sizeof(a) / sizeof(a[0]);
    int *ptr = a;

    for (int i = 1; i < count; i++)
    {
        int key=ptr[i];
        int j=i-1;
        while (j>=0 && ptr[j]>key)
        {
           ptr[j+1]=ptr[j];
           j--;
        }
        ptr[j+1]=key;
        
    }
    

    for (int i = 0; i < count; i++)
    {
        printf("%5d", *(ptr+i));
    }
}