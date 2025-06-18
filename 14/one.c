// Union and intersection of two arrays
#include <stdio.h>
int main()
{
    int a[100], b[100], n1, n2, uni[200], u, intersection[100], in, i, j, k;
    u = in = 0;

    // Accept two array
    // delete common elements and make unique
    // make union copy a array then copy b array
    // find intersection 
    // display union and intersection if found
    printf("Enter 1st Array N:");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter 2nd Array N:");
    scanf("%d", &n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n1; i++)
    {
        for (j = i + 1; j < n1; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n1 - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                j++;
                n1--;
            }
        }
    }

    for (i = 0; i < n2; i++)
    {
        for (j = i + 1; j < n2; j++)
        {
            if (b[i] == b[j])
            {
                for (k = j; k < n2 - 1; k++)
                {
                    b[k] = b[k + 1];
                }
                n2--;
                j--;
            }
        }
    }

    for (i = 0; i < n1; i++)
    {
        uni[u] = a[i];
        u++;
    }

    for (i = 0; i < n2; i++)
    {
        uni[u] = b[i];
        u++;
    }

    for (i = 0; i < n1; i++)
    {
        for (j = n1; j < u; j++)
        {
            if (uni[i] == uni[j])
            {
                for (k = j; k < u - 1; k++)
                {
                    uni[k] = uni[k + 1];
                }
                u--;
                intersection[in] = uni[i];
                in++;
                break;
            }
        }
    }
    printf("\nUnion is: \n");
    for (i = 0; i < u; i++)
    {
        printf("%5d", uni[i]);
    }

    if (in > 0)
    {
        printf("\nIntersection is: \n");
        for (i = 0; i < in; i++)
        {
            printf("%5d", intersection[i]);
        }
    }

    return 0;
}