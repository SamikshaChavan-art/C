#include <stdio.h>
int main()
{
    char str1[10], str2[15];
    int l=0;
    int i, j;

    printf("Enter string 1 and string 2:");
    scanf("%s%s", &str1, &str2);
    for (int i = 0; str1[i]!='\0'; i++)
    {
        l++;
    }

    for (j=0, i = l; str2[j]!='\0'; i++,j++)
    {
       str1[i]=str2[j];
    }
    str1[i]='\0';

    printf("Concatenated string is %s", str1);
    
    
}