#include<stdio.h>
#include<string.h>
#define MAX_TASKS 50
#define MAX_LEN 100
char tasks[MAX_TASKS][MAX_LEN];
int taskCount=0;
void addTask()
{
    if(taskCount<MAX_TASKS)
    {
        printf("Enter task: ");
        getchar();
        fgets(tasks[taskCount],MAX_LEN,stdin);
        tasks[taskCount][strcspn(tasks[taskCount],"\n")]='\0';
        taskCount++;
        printf("Task added!\n");
    }
    else
    {
        printf("Task list full!\n");
    }
}
void viewTasks()
{
    if(taskCount==0)
    {
        printf("No tasks available\n");
        return;
    }
    printf("\n---To-Do List---\n");
    for(int i=0;i<taskCount;i++)
    {
        printf("%d. %s\n",i+1,tasks[i]);
    }
}
void deleteTask()
{
    int index;
    printf("Enter task number to delete: ");
    scanf("%d",&index);
    if(index<1||index>taskCount)
    {
        printf("Invalid task number..!\n");
        return;
    }
    for(int i=index-1;i<taskCount-1;i++)
    {
        strcpy(tasks[i],tasks[i+1]);
    }
    taskCount--;
    printf("Task deleted..!\n");
}
int main()
{
    int choice;
    do
    {
        printf("\n1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice)
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
                printf("Goodbye..!\n");
                break;
            default:
                printf("Invalid choice..!\n");
                break;
        }
    }
    while(choice!=4);
    return 0;
}