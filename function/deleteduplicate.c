#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 2, 3, 4, 5, 6, 10, 9};
    int count = 10;
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count;)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < count - 1; k++)
                {
                    a[k] = a[k + 1];
                 
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
        printf("%5d", a[i]);
    }
}