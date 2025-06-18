// // Factors of a Number
// #include <stdio.h>
// int main()
// {
//     int n, a = 1;
//     printf("Enter N:");
//     scanf("%d", &n);
//     while (a <= n)
//     {
//         if (n % a == 0)
//         {
//             printf("%5d", a);
//         }

//         a++;
//     }
//     return 0;
// }

// Prime Number
// #include <stdio.h>
// int main()
// {
//     int n, a = 2, flag = 0;
//     printf("Enter N:");
//     scanf("%d", &n);
//     while (a <= n/2)
//     {
//         if (n % a == 0)
//         {
//             flag = 1;
//             break;
//         }
//         a++;
//     }

//     printf(flag == 0 ? "Prime Number" : "Not Prime Number");
//     return 0;
// }

// Prime Number in a range of 1 to n
#include <stdio.h>
int main()
{
    int b=2, a = 2;
    while (b <= 100)
    {
        int a=2;
        int isPrime = 1;
        while (a <= b / 2)
        {
            if (b % a == 0)
            {
                isPrime = 0;
                break;
            }
            a++;
        }
        if (isPrime)
        {
            printf("%5d", b);
        }

        b++;
    }
    return 0;
}