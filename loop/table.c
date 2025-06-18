#include <stdio.h>
int main()
{
    int a = 1, n;
    printf("Enter N:");
    scanf("%d", &n);
    while (a <= n)
    {
        int b=1;
       
        while (b <= 10)
        {
            printf("%5d", b * a);
            b++;
        }
        printf("\n");
        a++;
    }
}