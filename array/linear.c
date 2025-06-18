#include <stdio.h>
int main()
{
    int a[5] = {1, 4, 3, 5, 2};
    int key, flag = 0;
    printf("Enter a key:");
    scanf("%d", &key);
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
    }
    printf(flag == 1 ? "Key Found" : "Key Not Found");
}