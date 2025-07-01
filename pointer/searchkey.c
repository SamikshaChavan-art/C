#include <stdio.h>
#define MAX_INDEX 10
int main()
{

    int a[MAX_INDEX] = {10, 20, 30, 40, 50};
    int count = sizeof(a) / sizeof(a[0]);
    int *ptr = a;

    int flag = 0;
    int key;
    printf("Enter key:");
    scanf("%d", &key);

    for (int i = 0; i < count; i++)
    {
        if (*(ptr + i) == key)
        {
            flag = 1;
            break;
        }
    }

    printf(flag == 1 ? "Found" : "Not Found");
}