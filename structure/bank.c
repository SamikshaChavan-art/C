#include <stdio.h>
#include <string.h>
// Add each functionality in function
#define MAX 200
struct Bank
{
    int accno;
    char acc_name[50];
    char acc_type[50];
    int balance;
    int withdrawal;
    int deposit;
    char branch[50];
};
int main()
{
    struct Bank b1[MAX];
    int count;
    int c = 1;
    int type;
    do
    {
        int ch;
        printf("\n1. Create\n2. Display\n3. Search\n4. Insert\n5. Delete\n6. Deposit\n7. Withdraw\n8. Upgrade\n9. EXIT");
        printf("\nEnter your choice?");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            // create
            printf("Enter how accounts you want to add?");
            scanf("%d", &count);
            for (int i = 0; i < count; i++)
            {
                printf("Enter Acc No:");
                scanf("%d", &b1[i].accno);
                printf("Enter Acc Name:");
                scanf("%s", b1[i].acc_name);
                printf("\t1. Gold\t2. Silver\t3. Regular");
                printf("\nPlease select type of account:");
                scanf("%d", &type);
                switch (type)
                {
                case 1:
                    strcpy(b1[i].acc_type, "Gold");
                    break;
                case 2:
                    strcpy(b1[i].acc_type, "Silver");
                    break;
                case 3:
                    strcpy(b1[i].acc_type, "Regular");
                    break;
                default:
                    printf("Please select a valid type!");
                    break;
                }

                // Apply Switch case on Branch
                printf("Enter Acc Branch:");
                scanf("%s", b1[i].branch);
                printf("Enter Balance <5000 or >5000000:");
                scanf("%d", &b1[i].balance);
            }

            break;
        }

        case 2:
        {
            // Display or Read
            for (int i = 0; i < count; i++)
            {
                printf("\n===============Account Details for %d=======================\n", (i + 1));
                printf("\nAccount Number is: %d", b1[i].accno);
                printf("\nAccount Name: %s", b1[i].acc_name);
                printf("\nAccount Name: %s", b1[i].acc_type);
                printf("\nAccount Branch: %s", b1[i].branch);
                printf("\nAccount Balance: Rs.%d", b1[i].balance);
                if (b1[i].balance < 5000)
                {
                    printf("\nPlease maintain minimum account balance of Rs. 5000!!");
                    // charges on minbal
                }
                else if (b1[i].balance > 5000000)
                {
                    printf("\nBalance exceeds from limit, please maintain minimum balance or upgrade your account!!");
                }
                printf("\n============================================================\n");
            }

            break;
        }
        case 3:
        {
            // Search
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
                    printf("\nAccount Name: %s", b1[i].acc_type);
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
            // Insert
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
                printf("\t1. Gold\t2. Silver\t3. Regular");
                printf("\nPlease select type of account:");
                scanf("%d", &type);
                switch (type)
                {
                case 1:
                    strcpy(b1[i].acc_type, "Gold");
                    break;
                case 2:
                    strcpy(b1[i].acc_type, "Silver");
                    break;
                case 3:
                    strcpy(b1[i].acc_type, "Regular");
                    break;
                default:
                    printf("Please select a valid type!");
                    break;
                }

                printf("Enter Acc Branch:");
                scanf("%s", b1[i].branch);
                printf("Enter Balance:");
                scanf("%d", &b1[i].balance);
            }
            count += n;

            break;
        }
        case 5:
        {
            // delete
            int search;
            printf("Enter Account Number that you want to delete?");
            scanf("%d", &search);
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

        case 6:
        {
            // deposit
            int deposit;
            int useraccno;
            int flag = -1;
            printf("Please enter your account number!");
            scanf("%d", &useraccno);
            for (int i = 0; i < count; i++)
            {
                if (b1[i].accno == useraccno)
                {
                    flag = i;
                    break;
                }
            }
            if (flag >= 0)
            {
                printf("Account Found!!!");
                printf("\nPlease enter amount you want to deposit:");
                scanf("%d", &deposit);
                b1[flag].balance += deposit;
                printf("Balance Updated!!");
            }
            else
            {
                printf("Account Not Found!!!");
            }

            break;
        }
        case 7:
        {
            int withdraw;
            int useraccno;
            int flag = -1;
            printf("Enter your Account Number:");
            scanf("%d", &useraccno);
            for (int i = 0; i < count; i++)
            {

                if (b1[i].accno == useraccno)
                {
                    flag = i;
                    break;
                }
            }
            if (flag >= 0)
            {
                printf("Account Found!!!");
                printf("\nPlease enter amount you want to withdraw:");
                scanf("%d", &withdraw);
                if (b1[flag].balance < 5000)
                {
                    printf("Your balance is below limit!");
                    printf("Enter -1 if you want to quit or upgrade your account!");
                    int userflag;
                    scanf("%d", &userflag);
                    if (userflag == -1)
                    {
                        flag = -1;
                        break;
                    }
                }
                else if (b1[flag].balance > 5000)
                {
                    b1[flag].balance -= withdraw;
                    printf("Balance Withdrawn!");
                }
            }

            break;
        }
        case 8:
        {
            // upgrade accounts
            // minimum limit based on this type
            // deduct charges if minimum amount is not maintained over a period of time

            break;
        }
        case 9:
        {
            printf("===========================THANK YOU FOR BANKING WITH US==========================");
            c = 0;
            break;
        }

        default:
        {
            printf("\nInvalid Input!");
            break;
        }
        }
    } while (c);
}