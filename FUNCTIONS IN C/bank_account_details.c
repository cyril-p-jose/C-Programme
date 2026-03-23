#include <stdio.h>

struct customer
{
    int acc_no;
    char name[50];
    float balance;
};

void low_balance(struct customer c[], int n)
{
    int i;

    printf("\nCustomers with balance below Rs.100:\n");

    for(i = 0; i < n; i++)
    {
        if(c[i].balance < 100)
        {
            printf("Account No: %d  Name: %s\n", c[i].acc_no, c[i].name);
        }
    }
}

int main()
{
    struct customer c[200];
    int n, i;
    int acc_no, code;
    float amount;
    int found = 0;

    printf("Enter number of customers: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter account number: ");
        scanf("%d", &c[i].acc_no);

        printf("Enter name: ");
        scanf("%s", c[i].name);

        printf("Enter balance: ");
        scanf("%f", &c[i].balance);
    }

    low_balance(c, n);

    printf("\nEnter transaction details\n");

    printf("Account No: ");
    scanf("%d", &acc_no);

    printf("Amount: ");
    scanf("%f", &amount);

    printf("Code (1 = Deposit, 0 = Withdrawal): ");
    scanf("%d", &code);

    for(i = 0; i < n; i++)
    {
        if(c[i].acc_no == acc_no)
        {
            found = 1;

            if(code == 1)
            {
                c[i].balance = c[i].balance + amount;
                printf("Deposit successful.\n");
            }
            else if(code == 0)
            {
                if(c[i].balance < amount)
                {
                    printf("Insufficient balance for withdrawal.\n");
                }
                else
                {
                    c[i].balance = c[i].balance - amount;
                    printf("Withdrawal successful.\n");
                }
            }

            printf("Updated Balance: %.2f\n", c[i].balance);
            break;
        }
    }

    if(found == 0)
    {
        printf("Account number not found.\n");
    }

    return 0;
}
