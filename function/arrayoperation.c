#include <stdio.h>
#define MAX_INDEX 10
int a[MAX_INDEX];
int cnt = 0;

void add()
{
    int n;
    printf("Enter N:");
    scanf("%d", &n);
    if (MAX_INDEX > n && n < 0)
    {
        printf("Unable to print");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter values for %d ", i + 1);
        scanf("%d", &a[i]);
    }

    cnt = n;
}
void insert()
{
}

void display()
{
    printf("Values of an Array are:");
    for (int i = 0; i < cnt; i++)
    {
        printf("%5d", a[i]);
    }
}
void update()
{
}
void delete()
{
}
int main()
{
    // int a[10];
    // local declaration
    int flag = 1;
    int ch;
    while (flag)
    {
        printf("\n1.Add\n2.Insert\n3.Update\n4.Delete\n5.Display\n6.EXit");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            add();
            break;
        }
        case 2:
        {
            insert();
            break;
        }
        case 3:
        {
            update();
            break;
        }
        case 4:
        {
            delete();
            break;
        }
        case 5:
        {
            display();
            break;
        }
        case 6:
        {
            flag = 0;
            break;
        }
        default:
        {
            printf("Enter a valid choice........");
            break;
        }
        }
    }
}