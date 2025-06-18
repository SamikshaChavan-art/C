#include <stdio.h>
int main()
{
    int a[5] = {1, 4, 3, 5, 2};
    int key, flag = 0;
    printf("Enter a key:");
    scanf("%d", &key);
    int l = 0, h = 4;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (a[mid] < key)
        {
            l = mid + 1;
        }

        else if (a[mid] > key)
        {
            h = mid - 1;
        }
    }
    printf(flag == 1 ? "Key Found" : "Key Not Found");
}