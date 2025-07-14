#include <stdio.h>
#define MAX 20
struct Bank
{
    int accno;
    char acc_name[50];
    int balance;
    int withdrawal;
    int deposit;
    float interest;
    char branch[10];
};
int main()
{
    struct Bank b1[MAX];
    int count;
    int c = 1;
    do
    {
        int ch;
        printf("\n1. Create\n2. Display\n3. Search\n4. Insert\n5. Delete\n6. Deposit\n8. Withdraw\n9. EXIT");
        printf("\nEnter your choice?");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("Enter how accounts you want to add?");
            scanf("%d", &count);
            for (int i = 0; i < count; i++)
            {
                printf("Enter Acc No:");
                scanf("%d", &b1[i].accno);
                printf("Enter Acc Name:");
                scanf("%s", b1[i].acc_name);
                printf("Enter Acc Branch:");
                scanf("%s", b1[i].branch);
                printf("Enter Balance:");
                scanf("%d", &b1[i].balance);
            }

            break;
        }

        case 2:
        {
            for (int i = 0; i < count; i++)
            {
                printf("\n===============Account Details for %d=======================\n", (i + 1));
                printf("\nAccount Number is: %d", b1[i].accno);
                printf("\nAccount Name: %s", b1[i].acc_name);
                printf("\nAccount Branch: %s", b1[i].branch);
                printf("\nAccount Balance: Rs.%d", b1[i].balance);
                printf("\n============================================================\n");
            }

            break;
        }
        case 3:
        {
            int search;
            int flag = 0;
            printf("Enter Account Number to Search");
            scanf("%d", &search);
            for (int i = 0; i < count; i++)
            {
                if (b1[i].accno == search)
                {
                    printf("Record Found!!!!");
                    printf("\n===============Account Details for %d Roll No=======================\n", search);
                    printf("\nAccount Number is: %d", b1[i].accno);
                    printf("\nAccount Name: %s", b1[i].acc_name);
                    printf("\nAccount Branch: %s", b1[i].branch);
                    printf("\nAccount Balance: Rs.%d", b1[i].balance);
                    printf("\n====================================================================\n");
                    flag = 1;
                    break;
                }
            }
            if (flag != 1)
            {
                printf("Record Not Found");
            }
            ch = 3;
            break;
        }
        case 4:
        {
            int n;
            printf("Enter how accounts you want to add?");
            scanf("%d", &n);
            for (int i = count; i < count + n; i++)
            {
                int flag = 0;
                int temp;
                printf("Enter Acc No:");

                scanf("%d", &temp);

                for (int j = 0; j < count; j++)
                {
                    if (temp == b1[j].accno)
                    {

                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                {
                    printf("Account Number already exists!\n");
                    i--;
                    continue;
                }
                else if (flag == 0)
                {
                    b1[i].accno = temp;
                    printf("Account Number added!\n");
                }

                printf("Enter Acc Name:");
                scanf("%s", b1[i].acc_name);
                printf("Enter Acc Branch:");
                scanf("%s", b1[i].branch);
                printf("Enter Balance:");
                scanf("%d", &b1[i].balance);
            }
            count++;

            break;
        }
        case 5:
        {
            int search;
            printf("Enter Account Number that you want to delete?");
            scanf("%d",&search);
            int flag = -1;
            for (int i = 0; i < count; i++)
            {
                if (b1[i].accno == search)
                {
                    flag = i;
                    break;
                }
            }
            if (flag >= 0)
            {
                for (int i = flag; i < count; i++)
                {
                    b1[i] = b1[i + 1];
                }
                count--;
                printf("Record deleted successfully!");
            }
            else
            {
                printf("Account Number that you want to delete is not found!");
            }
            break;
        }
        case 7:
        {
            c = 0;
            break;
        }

        default:
            break;
        }

    } while (c);
}