#include <stdio.h>
#define MAX_INDEX 7
int main()
{

    int a[MAX_INDEX] = {101, 210, 130, 4220, 10};
    int count = 5;
    int *ptr = a;

    int pos, key;
    printf("Enter position and key:");
    scanf("%d%d", &pos, &key);
    for (int i = count-1; i >= pos-1; i--)
    {
        ptr[i+1]=ptr[i];
    }
    ptr[pos-1] = key;
    count++;

    for (int i = 0; i < count; i++)
    {
        printf("%5d", *(ptr+i));
    }
}