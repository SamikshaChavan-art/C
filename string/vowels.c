#include <stdio.h>
int main()
{
    char str[5][100] = {"Samiksha", "Chetana", "Sakshi", "Shrutika", "Shubham"};
    int vcnt = 0, ccnt = 0;
    int length_arr[10];

    for (int i = 0; i<5; i++)
    {
        int length = 0;
        for (int j = 0; str[i][j] != '\0'; j++)
        {
            length++;
            
        }
        length_arr[length]=
        printf("Length of String %s is %d\n",str[i], length);
    }
}