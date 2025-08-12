#include <stdio.h>

int main()
{
    int choice;
    double temp, converted;

    printf("====================================\n");
    printf("        Temperature Converter\n");
    printf("====================================\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("------------------------------------\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice)
    {
        case 1:
            printf(">>> Enter temperature in Celsius: ");
            scanf("%lf", &temp);
            converted = (temp * 9 / 5) + 32;
            printf("--- Result: %.2lf *C = %.2lf *F\n", temp, converted);
            break;

        case 2:
            printf(">>> Enter temperature in Fahrenheit: ");
            scanf("%lf", &temp);
            converted = (temp - 32) * 5 / 9;
            printf("--- Result: %.2lf *F = %.2lf *C\n", temp, converted);
            break;

        case 3:
            printf(">>> Enter temperature in Celsius: ");
            scanf("%lf", &temp);
            converted = temp + 273.15;
            printf("--- Result: %.2lf *C = %.2lf K\n", temp, converted);
            break;

        case 4:
            printf(">>> Enter temperature in Kelvin: ");
            scanf("%lf", &temp);
            if (temp < 0)
            {
                printf("!!! Invalid Kelvin value. Must be >= 0\n");
            }
            else
            {
                converted = temp - 273.15;
                printf("--- Result: %.2lf K = %.2lf *C\n", temp, converted);
            }
            break;

        default:
            printf("Invalid choice..! Please enter a number between 1 and 4\n");
    }

    printf("====================================\n");
    return 0;
}
