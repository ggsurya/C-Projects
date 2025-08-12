#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "expenses.txt"
#define MAX_DESC 100

void addExpense()
{
    FILE *file = fopen(FILENAME, "a");
    if (file == NULL)
    {
        printf("Error: Unable to open file for writing.\n");
        return;
    }

    char desc[MAX_DESC];
    float amount;

    printf("\nEnter expense description: ");
    getchar();
    fgets(desc, MAX_DESC, stdin);
    desc[strcspn(desc, "\n")] = 0;

    printf("Enter amount: ");
    if (scanf("%f", &amount) != 1)
    {
        printf("Invalid amount. Expense not added.\n");
        fclose(file);
        while (getchar() != '\n');
        return;
    }

    fprintf(file, "%s|%.2f\n", desc, amount);
    fclose(file);
    printf("Expense added successfully.\n");
}

void viewExpenses()
{
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL)
    {
        printf("\nNo expenses found.\n");
        return;
    }

    char line[150];
    float total = 0.0;
    int count = 0;

    printf("\n----------- Expense List -----------\n");
    printf("%-30s %10s\n", "Description", "Amount");
    printf("------------------------------------\n");

    while (fgets(line, sizeof(line), file))
    {
        char *desc = strtok(line, "|");
        char *amtStr = strtok(NULL, "|");
        if (desc && amtStr)
        {
            float amt = atof(amtStr);
            printf("%-30s %10.2f\n", desc, amt);
            total += amt;
            count++;
        }
    }
    printf("------------------------------------\n");
    printf("Total (%d items): %18.2f\n", count, total);

    fclose(file);
}

void deleteExpenses()
{
    if (remove(FILENAME) == 0)
    {
        printf("\nAll expenses deleted successfully.\n");
    }
    else
    {
        printf("\nNo expenses to delete.\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n========= Expense Tracker =========\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Delete All Expenses\n");
        printf("4. Exit\n");
        printf("===================================\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        
        switch (choice)
        {
            case 1:
                addExpense();
                break;
            case 2:
                viewExpenses();
                break;
            case 3:
                deleteExpenses();
                break;
            case 4:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}