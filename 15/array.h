#include <stdio.h>
void accept(int a[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display(int a[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}

int linearSearch(int a[100], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int sort(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int insert(int a[100], int n, int pos, int key)
{
    for (int i = n; i >= pos; i--)
    {
        a[n] = a[n - 1];
    }
    a[pos - 1] = key;
}

int delete(int a[100], int n, int key)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        if (key==a[i])
        {
        for (j = i; j < n - 1; j++)
        {
            a[j]=a[j+1];
        }
        } 
    }
    
}
