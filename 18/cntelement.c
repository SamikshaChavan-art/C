#include <stdio.h>
int main()
{
    int a[100], i, j, n;
    printf("Enter n:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int cnt = 0;
    for (i = 0; i < n; i++)
    {
        cnt = 1;
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] == a[j + 1])
            {
                cnt++;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%5d is %d times", a[i], cnt);
    }
}