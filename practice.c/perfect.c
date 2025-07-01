#include <stdio.h>
int main()
{
    
    int number;
    printf("Enter number:");
    scanf("%d", &number);

    int sum = 0;
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    if (sum == number)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect Number");
    }
}