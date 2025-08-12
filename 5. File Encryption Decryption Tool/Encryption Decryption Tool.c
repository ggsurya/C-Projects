#include <stdio.h>
#include <stdlib.h>

#define MAX_FILENAME 100

void caesarCipher(FILE *inputFile, FILE *outputFile, int shift)
{
    int ch;

    while ((ch = fgetc(inputFile)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ((ch - 'a' + shift + 26) % 26) + 'a';
        } 
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ((ch - 'A' + shift + 26) % 26) + 'A';
        }
        fputc(ch, outputFile);
    }
}

int main()
{
    char inputFilename[MAX_FILENAME], outputFilename[MAX_FILENAME];
    int choice, shift;

    printf("============================================\n");
    printf("   File Encryption / Decryption Tool\n");
    printf("           (Caesar Cipher)\n");
    printf("============================================\n\n");

    printf("[1] Encrypt\n[2] Decrypt\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2)
    {
        printf("Invalid choice. Exiting.\n");
        return 1;
    }

    printf("Enter input file name  : ");
    scanf("%s", inputFilename);

    printf("Enter output file name : ");
    scanf("%s", outputFilename);

    printf("Enter shift key (int)  : ");
    scanf("%d", &shift);

    if (choice == 2)
    {
        shift = -shift;
    }

    FILE *inputFile = fopen(inputFilename, "r");
    if (inputFile == NULL)
    {
        printf("Error: Unable to open input file '%s'.\n", inputFilename);
        return 1;
    }

    FILE *outputFile = fopen(outputFilename, "w");
    if (outputFile == NULL)
    {
        printf("Error: Unable to create output file '%s'.\n", outputFilename);
        fclose(inputFile);
        return 1;
    }

    caesarCipher(inputFile, outputFile, shift);

    printf("\n%s completed successfully!\n", (choice == 1) ? "Encryption" : "Decryption");

    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}