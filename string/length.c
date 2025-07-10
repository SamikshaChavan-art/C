#include <stdio.h>
int main()
{
    char name[10];
    printf("Enter Name:");
    scanf("%s", &name);
    int vcnt = 0, ccnt = 0;

    int l = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        l++;
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            vcnt++;
        }
        else
        {
            ccnt++;
        }
    }
    printf("Length of String is %d\n", l);
    printf("Count of Vowels %d\n", vcnt);
    printf("Count of Consonants %d\n", ccnt);
    for (int i = l - 1; i >= 0; i--)
    {
        printf("%3c", name[i]);
    }
}