// Swapping not happening before use of pointer
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;

    printf("Enter 2 Numbers:");
    scanf("%d%d", &a, &b);

    printf("\nBefore Swapping: \nA = %d\nB = %d", a, b);
    swap(&a, &b);

    printf("\nAfter Swapping: \nA = %d\nB = %d", a, b);
    return 0;
}