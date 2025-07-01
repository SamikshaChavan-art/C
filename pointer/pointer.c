#include <stdio.h>
int main()
{
    int no1 = 10;
    int no2 = 200;

    int *ptr1 = &no1;
    int *ptr2 = &no2;

    // Value of variable whose address is stored in the pointer variable
    printf("Value of no1 pointer  %d\n", *ptr1);
    printf("Value of no2 pointer %d\n", *ptr2);
    // Address of variable whose is stored in the pointer variable
    printf("Add Value of no1 pointer  %u\n", ptr1);
    printf("Add Value of no2 pointer %u\n", ptr2);
}