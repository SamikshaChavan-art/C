#include <stdio.h>
int main()
{
    int n = 153;
    int temp = n;
    int cnt = 0;
    int armstrong = 0;

    while (temp > 0)
    {

        temp /= 10;
        cnt++;
    }

    temp = n;
    while (temp > 0)
    {
        int digits = temp % 10;
        int pow = 1;
        for (int i = 0; i < cnt; i++)
        {
            pow *= digits;
        }

        armstrong += pow;
        temp /= 10;
    }

    printf("Armstrong number is %d \n", armstrong);
    if (armstrong == n)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
}