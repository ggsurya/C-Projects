#include<stdio.h>
#include<string.h>
struct Account
{
    char name[50];
    int accountNumber;
    float balance;
};
struct Account acc;
void createAccount()
{
    printf("Enter account holder name: ");
    getchar();
    fgets(acc.name,sizeof(acc.name),stdin);
    acc.name[strcspn(acc.name,"\n")]='\0';
    printf("Enter account number: ");
    scanf("%d",&acc.accountNumber);
    acc.balance=0;
    printf("Account created successfully..!\n");
}
void deposit()
{
    float amount;
    printf("Enter deposit amount: ");
    scanf("%f",&amount);
    acc.balance+=amount;
    printf("Amount deposited successfully!\n");
}
void withdraw()
{
    float amount;
    printf("Enter withdraw amount: ");
    scanf("%f",&amount);
    if(amount>acc.balance)
    {
        printf("Insufficient balance..!\n");
    }
    else
    {
        acc.balance-=amount;
        printf("Amount withdrawn successfully..!\n");
    }
}
void checkBalance()
{
    printf("\n---Account Details---\n");
    printf("Name: %s\n",acc.name);
    printf("Account Number: %d\n",acc.accountNumber);
    printf("Balance: %.2f\n",acc.balance);
}
int main()
{
    int choice;
    do
    {
        printf("\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Check Balance\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                printf("Goodbye..!\n");
                break;
            default:
                printf("Invalid choice..!\n");
                break;
        }
    }
    while(choice!=5);
    return 0;
}
