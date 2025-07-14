#include <stdio.h>
int main()
{
    char name[10][10];
    int i, j, k;
    int l, vcnt, ccnt;
    int length[10];
    int vcntarr[10];
    int ccntarr[10];

    printf("Enter names:");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", name[i]);
    }
    k = 0;
    for (i = 0; i < 5; i++)
    {
        l = 0;
        vcnt = 0;
        ccnt = 0;

        for (j = 0; name[i][j] != '\0'; j++)
        {
            l++;
            if (name[i][j] == 'a' || name[i][j] == 'e' || name[i][j] == 'i' || name[i][j] == 'o' || name[i][j] == 'u')
            {
                vcnt++;
            }
            else
            {
                ccnt++;
            }
        }
        length[k] = l;
        vcntarr[k] = vcnt;
        ccntarr[k] = ccnt;
        k++;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%s\t\t\t\t%d\t%d\t%d", name[i], length[i], vcntarr[i], ccntarr[i]);
        printf("\n");
    }
}