#include <stdio.h>
int main()
{
    int no1, no2, sum;

    int *ptr1 = &no1;
    int *ptr2 = &no2;
    int *ptr3 = &sum;
    printf("Enter two numbers for addition:");
    scanf("%d%d", &no1, &no2);

    *ptr3 = *ptr1 + *ptr2;
    printf("Addition is %d using *ptr \n", *ptr3);
    printf("Addition is %d using sum variable", sum);
}
