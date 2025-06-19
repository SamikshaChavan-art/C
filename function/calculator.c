#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    if (a < b)
    {
        printf("First Value is Smaller than Second");
    }
    else
    {
        return a - b;
    }
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    if (b==0)
    {
        printf("Cannot divide by 0");
    }
    else
    {
        return a / b;
    }
}
int mod(int a, int b)
{
    if (b==0)
    {
        printf("Cannot divide by zero");
    }
    else
    {
        return a % b;
    }
}
int main()
{
    int a, b, ch, flag = 1;
    while (flag)
    {
        printf("Enter 2 Values:");
        scanf("%d%d", &a, &b);
        printf("1. Add \n2. Sub\n3. Mul\n4. Div\n5. Mod\n");
        printf("Enter choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("Addition is  %d", add(a, b), "\n");

            break;
        }
        case 2:
        {
            printf("Substraction is %d", sub(a, b), "\n");

            break;
        }
        case 3:
        {
            printf("Multiplication is %d", mul(a, b), "\n");

            break;
        }
        case 4:
        {
            printf("Division is %d ", div(a, b), "\n");

            break;
        }
        case 5:
        {
            printf("Modulation is %d", mod(a, b), "\n");

            break;
        }
        case 6:
        {
            flag = 0;
            break;
        }
        default:
        {
            printf("Enter a valid choice?");
            break;
        }
        }
    }
}