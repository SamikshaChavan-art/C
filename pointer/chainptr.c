#include <stdio.h>
int main()
{
    int no = 20;
    int *ptr = &no;

    printf("Value of var using no %d", no);
    printf("\n");
    printf("Address of var using no %u", &no);
    printf("\n");

    printf("Value of var using ptr %d", *ptr);
    printf("\n");
    printf("Address of var using ptr %u", ptr);
    printf("\n");

    int **ptr2 = &ptr;
    printf("Value of var using *ptr2 %d", **ptr2);
    printf("\n");
    printf("Address of var using ptr2 %u", *ptr2);
    printf("\n");
    printf("Address of ptr1 using ptr2 %u", ptr2);
    printf("\n");

    printf("Address of ptr2 %u", &ptr2);
}