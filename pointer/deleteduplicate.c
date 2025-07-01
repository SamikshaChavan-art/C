#include <stdio.h>
#define MAX_INDEX 10
int main()
{
    int a[MAX_INDEX] = {101, 102, 102, 104, 104, 101};
    int count = 6;
    int *ptr=&a[0];

    // delete duplicate
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count;)
        {
            if (ptr[i] == ptr[j])
            {
                for (int k = j; k < count - 1; k++)
                {
                    ptr[k] = ptr[k + 1];
                }
                count--;
            }
            else
            {
                j++;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%5d", *(ptr+i));
    }
    
}