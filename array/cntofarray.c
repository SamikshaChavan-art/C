#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 1, 2, 3, 1, 4, 2, 5};
    for (int i = 0; i < 12; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 12; j++)
        {
            if (a[i] == a[j])
            {
                cnt++;
            }
        }
        printf("%d is %d times", a[i], cnt);
        printf("\n");
    }
}

// Occurences of an element