#include <stdio.h>
void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}

void selection_sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}

void insertion_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            int temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            j--;
        }
    }
}

int insert(int a[], int n, int pos, int key)
{
    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = key;
    n++;
}

void delete(int a[], int n, int pos)
{
    for (int i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}
int main()
{
    int a[5] = {31, 2, 4, 6, 21};
    int length = 5;
    // insertion_sort(a, length);
    int pos;
    printf("Enter Position:");
    scanf("%d", &pos);
    delete(a, length, pos);
    display(a, length);
}