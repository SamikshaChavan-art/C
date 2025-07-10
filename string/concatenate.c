#include <stdio.h>
int main()
{
    char str1[10];
    char str2[10];
    int i, j, count = 0;

    printf("Enter two strings:");
    scanf("%s%s", &str1, &str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        count++;
    }

    for (j = 0, i = count; str2[j] != '\0'; i++, j++)
    {
        str1[i]=str2[j];
    }
    str1[i]='\0';
    printf("Concatenated String %s", str1);
}