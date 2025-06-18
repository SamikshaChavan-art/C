#include <stdio.h>
int main()
{
    int i, j, a[100], n;
    int cnt = 0;

    printf("How many times you want to shift?");
    scanf("%d", &cnt);

    for (i = 0; i < cnt; i++)
    {
        int temp = a[0];
        // first element is stored in temp
        for (j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];
            //    used to delete an element
        }
        a[n - 1] = temp;
        // n-1 because it is stored at the last position
    }

    printf("After Shifting:");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
}