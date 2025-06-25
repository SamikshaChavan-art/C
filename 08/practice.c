#include <stdio.h>
int main()
{
    int a[] = {12, 3, 4, 78, 2, 31, 100, 1, 0};
    int length = sizeof(a) / sizeof(a[0]);

    // bubble sort
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // selection sort
    // for (int i = 0; i < length-1; i++)
    // {
    //     int min=i;
    //     for (int j = i+1; j < length; j++)
    //     {
    //         if (a[j]<a[min])
    //         {
    //            min=j;
    //         }
    //         int temp=a[i];
    //         a[i]=a[min];
    //         a[min]=temp;
    //     }
    // }

    // insertion sort
    // for (int i = 1; i < length; i++)
    // {
    //     int key = a[i];
    //     int j = i - 1;
    //     while (j >= 0 && a[j] > key)
    //     {
    //         a[j + 1] = a[j];
    //         j--;
    //     }
    //     a[j + 1] = key;
    // }

    // linear search

    // for (int i = 0; i < length; i++)
    // {
    //     if (key == a[i])
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }
    // printf(flag == 1 ? "FOUND!!" : "NOT FOUND");

    int key = 200;
    int flag = 0;
    for (int i = 0; i < length; i++)
    {
        int l = 0;
        int h = length - 1;

        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (a[mid] == key)
            {
                flag = 1;
                break;
            }
            else if (a[mid] < key)
            {
                l = mid + 1;
            }
            else if (a[mid] > key)
            {
                h = mid - 1;
            }
        }
    }
    printf(flag == 1 ? "FOUND!!" : "NOT FOUND");

    // for (int i = 0; i < length; i++)
    // {
    //     printf("%5d", a[i]);
    // }
}