#include <stdio.h>
#define MAX_INDEX 10
int main()
{

    int a[MAX_INDEX];
    int count;
    int *ptr = a;

    printf("Enter length:");
    scanf("%d", &count);
    printf("Enter elements");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", (ptr + i));
    }

    for (int i = 0; i < count; i++)
    {
        printf("%5d", *(ptr + i));
    }
}