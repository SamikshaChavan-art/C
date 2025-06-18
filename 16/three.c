#include <stdio.h>
int add(int a, int b)
{
    printf("\nAddition is %d", (a + b));
}
int sub(int a, int b)
{
    printf("\nSubstraction is %d", (a - b));
}
int mul(int a, int b)
{
    printf("\nMultiplication is %d", (a * b));
}
int div(int a, int b)
{
    printf("\nDivision is %d", (a / b));
}
int main()
{
    while (1)
    {
        int op1, op2;
        char ch;
        printf("Enter Expression:");
        scanf("%d%c%d", &op1, &ch, &op2);
        switch (ch)
        {
            // for each case here the operator goes to specific function where operands are passed as parameters
        case '+':
            add(op1, op2);
            break;
        case '-':
            sub(op1, op2);
            break;
        case '*':
            mul(op1, op2);
            break;
        case '/':
            div(op1, op2);
            break;
        case '0':
            return 0;
            break;
        default:
            printf("Invalid input");
            break;
        }
    }
}