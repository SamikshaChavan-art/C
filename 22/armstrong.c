#include <stdio.h>
int main()
{
    int cnt = 0;
    int n;
    printf("Enter N:");
    scanf("%d", &n);
    int temp = n;
    int rem = 0;
    int sum = 0;

    while (n != 0)
    {
        n = n / 10;
        cnt++;
    }

    while (n != 0)
    {
        rem = n % 10;
        int result = 1;

        for (int i = 0; i < cnt; i++)
        {
            result = result * rem;
        }
        sum += result;
        n = n / 10;
    }

    if (sum == temp)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}