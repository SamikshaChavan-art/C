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

    int l = 0;
    int h = count - 1;
    while (l <= h)
    {
        int mid=(l+h)/2;
        for (int j = 0; j < count; j++)
        {
            if (ptr[mid] == key)
            {
                flag = 1;
                break;
            }
            else if (ptr[mid] > key)
            {
                l = mid + 1;
            }
            else if (ptr[mid] < key)
            {
                h = mid - 1;
            }
        }
    }

    printf(flag == 1 ? "Found" : "Not Found");
}