#include <stdio.h>
int main()
{
    char name[10];
    printf("Enter Name:");
    scanf("%s", name);

    int i, j, b = 1;

    int l = 0;
    for (i = 0; name[i] != '\0'; i++)
    {
        l++;
    }

    for (i = 0, j = l - 1; i < j; i++, j--)
    {
        if (name[i]!=name[j])
        {
           b=0;
           break;
        }
        
    }

    printf(b==1?"Palindrome":"Not Palindrome");
}