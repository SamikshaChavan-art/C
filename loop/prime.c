#include <stdio.h>
int main()
{
    int n, a = 2, flag = 0;
    printf("Enter N:");
    scanf("%d", &n);
    while (a <= n / 2)
    {
        if (n % a == 0)
        {
            flag = 1;
            break;
        }
        a++;
    }

    printf(flag == 0 ? "Prime Number" : "Not a Prime Number");
    return 0;
}