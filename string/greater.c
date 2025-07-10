#include <stdio.h>
int main()
{
    char str1[10];
    char str2[10];
    int c1 = 0, c2 = 0;
    printf("Enter two string:");
    scanf("%s%s", &str1, &str2);

    for (int i = 0, j = 0; str1[i] != '\0' || str2[i] != '\0'; i++, j++)
    {
        if (str1[i] > str2[j])
        {
            c1 = 1;
            break;
        }
        else if (str1[i] < str2[j])
        {
            c2 = 1;
            break;
        }
        else if (str1[i] == str2[j])
        {
            continue;
        }
    }

    if (c1 == 1)
    {
        printf("String 1 is greater");
    }
    else if (c2 == 1)
    {
        printf("String 2 is greater");
    }
    else
    {
        printf("Both String is Same");
    }
}