#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int flag = 1;
    while (flag)
    {
        printf("1. Print even numbers from array\n2. Print sum of array\n3. Print addition of even numbers\n4. Prime numbers from array\n5. Exit\nEnter Choice");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            for (int i = 0; i < 10; i++)
            {
                if (a[i] % 2 == 0)
                {
                    printf("%5d", a[i]);
                }
            }
            printf("\n");
            break;
        }
        case 2:
        {
            int sum = 0;
            for (int i = 0; i < 10; i++)
            {
                sum += a[i];
            }
            printf("Sum of Array %d", sum);
            printf("\n");
            break;
        }
        case 3:
        {
            int sum = 0;
            for (int i = 0; i < 10; i++)
            {
                if (a[i] % 2 == 0)
                {
                    sum += a[i];
                }
            }
            printf("Sum of Even Array %d", sum);
            printf("\n");
        }
        break;
        case 4:
        {
            for (int i = 0; i < 10; i++)
            {
                if (a[i] % i != 0)
                {
                    printf("%5d", a[i]);
                }
            }
            printf("\n");
            break;
        }
        case 5:
        {
            flag = 0;
            break;
        }
        default:
        {
            printf("Invalid Choice..............");
            break;
        }
        }
    }
    return 0;
}