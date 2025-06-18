#include <stdio.h>
int main()
{
    int a = 1;
    int n = 5;
    int sum = 0;
    while (a <= n)
    {
        sum += a;
        a++;
    }
    printf("Sum is %d", sum);
}