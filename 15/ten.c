#include <stdio.h>
#include "array.h"
int main()
{
    int a[100], n, key, i;

    printf("Enter n:");
    scanf("%d", &n);

    accept(a, n);

    printf("Enter key:");
    scanf("%d", &key);

    display(a, n);

    if (linearSearch(a, n, key))
    {
        printf("\nKey found!!");
    }
    else
    {
        printf("\nKey not found!!");
    }

//     int linearSearch1(int a[100], int n, int key) {
//     int flag = 0;
//     for (i = 0; i < n; i++)
//     {
//         if (a[i] == key)
//         {
//             flag = 1;
//             return 0;
//         }
//     }

//     if (flag)
//     {
//         printf("Element Found!!!");
//     }
//     else
//     {
//         printf("Element not Found!!!");
//     }
// }
}
    
    
