#include <stdio.h>
#define MAX 20
struct Student
{
    int rollno;
    char name[10];
    float perc;
};

int main()
{
    struct Student stud1[MAX];
    struct Student temp[MAX];

    int c = 1;
    int count;
    do
    {

        printf("\n1. Create\n2. Display\n3. Search\n4. Delete\n5. Sort\n6. Exit");
        int ch;
        printf("\nEnter choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {

            printf("Enter how many students you want to store?");
            scanf("%d", &count);
            for (int i = 0; i < count; i++)
            {
                printf("Enter Roll No:");
                scanf("%d", &stud1[i].rollno);
                printf("Enter Name:");
                scanf("%s", stud1[i].name);
                printf("Enter Percentage:");
                scanf("%f", &stud1[i].perc);
            }
            break;
        }
        case 2:
        {
            for (int i = 0; i < count; i++)
            {
                printf("\n=====================Student Data for index %d========================", (i + 1));
                printf("\nRoll No: %d", stud1[i].rollno);
                printf("\nName: %s", stud1[i].name);
                printf("\nPercentage: %f", stud1[i].perc);
            }
            break;
        }
        case 3:
        {
            int search;
            int flag = 0;
            printf("Enter Roll No to search?");
            scanf("%d", &search);
            for (int i = 0; i < count; i++)
            {
                if (stud1[i].rollno == search)
                {
                    printf("Record Found!!");
                    printf("\nRoll No: %d", stud1[i].rollno);
                    printf("\nName: %s", stud1[i].name);
                    printf("\nPercentage: %f", stud1[i].perc);
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                printf("Record Not Found!!");
            }

            break;
        }
        case 4:
        {
            int search;
            int flag = -1;
            printf("Enter Roll No to delete?");
            scanf("%d", &search);
            for (int i = 0; i < count; i++)
            {
                if (stud1[i].rollno == search)
                {
                    flag = i;
                    break;
                }
            }
            if (flag >= 0)
            {
                for (int i = flag; i < count; i++)
                {
                    stud1[i] = stud1[i + 1];
                }
                count--;
            }
            break;
        }
        case 5:
        {
            for (int i = 0; i < count - 1; i++)
            {
                for (int j = i + 1; j < count; j++)
                {
                    if (stud1[i].perc > stud1[j].perc)
                    {
                        temp[i] = stud1[i];
                        stud1[i] = stud1[j];
                        stud1[j] = temp[i];
                    }
                }
            }
            printf("Sorting done............");
            break;
        }
        case 6:
        {
            c = 0;
            break;
        }
        default:
        {
            printf("\nPlease enter a valid choice?");
            break;
        }
        }
    } while (c == 1);
}