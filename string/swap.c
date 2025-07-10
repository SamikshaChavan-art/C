#include <stdio.h>
int main()
{
    char str1[10];
    char str2[10];
    char temp[10];

    printf("Enter String 1:");
    scanf("%s", str1);
    printf("Enter String 2:");
    scanf("%s", str2);

    int i = 0;
    while (str1[i] != '\0')
    {
        temp[i] = str1[i];
        i++;
    }
    temp[i] = '\0';

    i = 0;
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';

    i = 0;
    while (temp[i] != '\0')
    {
        str2[i] = temp[i];
        i++;
    }
    str2[i] = '\0';

    printf("\nString 1:");
    printf("%s", str1);
    printf("\nString 2:");
    printf("%s", str2);
}