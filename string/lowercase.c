#include <stdio.h>
int main()
{
    char name[10];
    printf("Enter Name:");
    scanf("%s", &name);
    int l = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        l++;
    }
    for (int i = 0; i < l; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
            printf("%c", name[i]);
        }
        else
        {
            printf("%c", name[i]);
        }
    }
}