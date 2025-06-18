#include <stdio.h>
int main()
{
    int a = 1, n;
    printf("Enter N:");
    scanf("%d", &n);
demo:
    if (a <= n)
    {
        printf("%5d", a++);
        goto demo;
    }

demo:
    if (a <= n)
    {
        printf("%5d", a);
        a++;
        goto demo;
    }
}
