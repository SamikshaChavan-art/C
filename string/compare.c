#include <stdio.h>
int main()
{
    char str1[10], str2[10];

    printf("Enter str1 and str2:");
    scanf("%s%s", &str1, &str2);

    int i, j;
    int c1 = 0, c2 = 0;
    for (i = 0, j = 0; str1[i] != '\0', str2[j] != '\0'; i++, j++)
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

    if (c1==1)
    {
        printf("String 1 is greater");
    }
    else if (c2==1)
    {
        printf("String 2 is greater");
    }
    else{
        printf("String 1 equal to String 2");
    }
    
    
}