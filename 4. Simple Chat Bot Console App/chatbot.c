#include <stdio.h>
#include <string.h>
#include <time.h>

void chatbot()
{
    char input[100];
    printf("====================================\n");
    printf("   Welcome to Simple ChatBot\n");
    printf("====================================\n");
    printf("Type 'bye' to exit.\n\n");

    while (1)
    {
        printf("You   > ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        for (int i = 0; input[i]; i++)
        {
            if (input[i] >= 'A' && input[i] <= 'Z')
                input[i] += 32;
        }

        if (strcmp(input, "bye") == 0)
        {
            printf("Bot   > Goodbye! Have a nice day.\n");
            break;
        }

        else if (strcmp(input, "hi") == 0 || strcmp(input, "hello") == 0)
        {
            printf("Bot   > Hello! How can I help you?\n");
        }

        else if (strstr(input, "how are you") != NULL)
        {
            printf("Bot   > I am good, thank you!\n");
        }

        else if (strstr(input, "time") != NULL)
        {
            time_t now = time(NULL);
            struct tm *t = localtime(&now);
            printf("Bot   > Current time is %02d:%02d:%02d\n", t->tm_hour, t->tm_min, t->tm_sec);
        }

        else if (strstr(input, "weather") != NULL)
        {
            printf("Bot   > I don't have real weather info, but I hope it's nice outside!\n");
        }

        else
        {
            printf("Bot   > Sorry, I didn't understand that.\n");
        }
    }
}

int main()
{
    chatbot();
    return 0;
}
