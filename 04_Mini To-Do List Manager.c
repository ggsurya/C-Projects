#include <stdio.h>
#include <string.h>

#define MAX_TASKS 50
#define MAX_LEN 100

char tasks[MAX_TASKS][MAX_LEN];
int taskCount = 0;

void clearInputBuffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void addTask()
{
    if (taskCount < MAX_TASKS)
    {
        printf("Enter task: ");
        clearInputBuffer();
        fgets(tasks[taskCount], MAX_LEN, stdin);
        tasks[taskCount][strcspn(tasks[taskCount], "\n")] = '\0';
        taskCount++;
        printf(">>> Task added successfully!\n");
    }
    else
    {
        printf("!!! Task list is full. Cannot add more tasks.\n");
    }
}

void viewTasks()
{
    if (taskCount == 0)
    {
        printf("No tasks available\n");
        return;
    }
    printf("\n-------- TO-DO LIST --------\n");
    for (int i = 0; i < taskCount; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
    printf("----------------------------\n");
}

void deleteTask()
{
    int index;
    printf(">>> Enter task number to delete: ");
    scanf("%d", &index);

    if (index < 1 || index > taskCount)
    {
        printf("!!! Invalid task number. Try again.\n");
        return;
    }

    for (int i = index - 1; i < taskCount - 1; i++)
    {
        strcpy(tasks[i], tasks[i + 1]);
    }

    taskCount--;
    printf(">>> Task deleted successfully.\n");
}

int main()
{
    int choice;

    printf("====================================\n");
    printf("         SIMPLE TO-DO LIST\n");
    printf("====================================\n");

    do
    {
        printf("\nMENU:\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Delete Task\n");
        printf("4. Exit\n");
        printf("------------------------------------\n");
        printf(">>> Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addTask();
                break;

            case 2:
                viewTasks();
                break;

            case 3:
                deleteTask();
                break;

            case 4:
                printf(">>> Exiting... Goodbye!\n");
                break;

            default:
                printf("!!! Invalid choice. Please enter a number between 1 and 4.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
