#include<stdio.h>
#include<string.h>
struct Account
{
    char name[50];
    int accountNumber;
    float balance;
    int isCreated;
};
struct Account acc={.isCreated=0};
void clearInputBuffer()
{
    int ch;
    while((ch=getchar())!='\n'&&ch!=EOF);
}
void createAccount()
{
    printf("\n>>> Enter account holder name: ");
    clearInputBuffer();
    fgets(acc.name,sizeof(acc.name),stdin);
    acc.name[strcspn(acc.name,"\n")]='\0';
    printf(">>> Enter account number: ");
    scanf("%d",&acc.accountNumber);
    acc.balance=0;
    acc.isCreated=1;
    printf(">>> Account created successfully!\n");
}
void deposit()
{
    if(!acc.isCreated)
    {
        printf("!!! Please create an account first.\n");
        return;
    }
    float amount;
    printf("Enter deposit amount: ");
    scanf("%f",&amount);
    if(amount<=0)
    {
        printf("!!! Invalid amount. Must be greater than 0.\n");
        return;
    }
    acc.balance+=amount;
    printf("Amount deposited successfully!\n");
}
void withdraw()
{
    if(!acc.isCreated)
    {
        printf("!!! Please create an account first.\n");
        return;
    }
    float amount;
    printf(">>> Enter withdraw amount: ");
    scanf("%f",&amount);
    if(amount<=0)
    {
        printf("!!! Invalid amount. Must be greater than 0.\n");
    }
    else if(amount>acc.balance)
    {
        printf("!!! Insufficient balance.\n");
    }
    else
    {
        acc.balance-=amount;
        printf(">>> Amount withdrawn successfully!\n");
    }
}
void checkBalance()
{
    if(!acc.isCreated)
    {
        printf("!!! Please create an account first.\n");
        return;
    }
    printf("\n------ Account Details ------\n");
    printf("Holder Name   : %s\n",acc.name);
    printf("Account Number: %d\n",acc.accountNumber);
    printf("Balance       : Rs. %.2f\n",acc.balance);
    printf("------------------------------\n");
}
int main()
{
    int choice;
    printf("====================================\n");
    printf("     SIMPLE BANK ACCOUNT SYSTEM     \n");
    printf("====================================\n");
    do
    {
        printf("\nMenu:\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("------------------------------------\n");
        printf(">>> Enter your choice (1-5): ");
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
                printf(">>> Exiting... Thank you!\n");
                break;
            default:
                printf("!!! Invalid choice. Please try again.\n");
                break;
        }
    }
    while(choice!=5);
    return 0;
}
