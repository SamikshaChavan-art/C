#include <stdio.h>
#define MAX_LENGTH 20
int main()
{
    int a[MAX_LENGTH] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int count = 9;
    int flag = 1;
    while (flag)
    {
        printf("1.Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Insert element\n5. Delete element\n6. Linear Search\n7. Binary Search\n8. EXIT");
        printf("\nEnter your choice:");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            for (int i = 0; i < count - 1; i++)
            {
                for (int j = 0; j < count - i - 1; j++)
                {
                    if (a[j] > a[j + 1])
                    {
                        int temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }
            }
            for (int i = 0; i < count; i++)
            {
                printf("%5d", a[i]);
            }
            break;
        }
        case 2:
        {
            for (int i = 0; i < count - 1; i++)
            {
                int min = i;
                for (int j = i+1; j < count; j++)
                {
                    if (a[min] > a[j])
                    {
                        min = j;
                    }
                }
                int temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }

            break;
        }

        default:
            break;
        }
    }
}