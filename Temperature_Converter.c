#include<stdio.h>
int main()
{
    int choice;
    double temp,converted;
    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("Enter your choice (1-4): ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%lf",&temp);
            converted=(temp*9/5)+32;
            printf("%.2lf *C = %.2lf *F\n",temp,converted);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf",&temp);
            converted=(temp-32)*5/9;
            printf("%.2lf *F = %.2lf *C\n",temp,converted);
            break;
        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%lf",&temp);
            converted=temp+273.15;
            printf("%.2lf *C = %.2lf K\n",temp,converted);
            break;
        case 4:
            printf("Enter temperature in Kelvin: ");
            scanf("%lf",&temp);
            converted=temp-273.15;
            printf("%.2lf K = %.2lf *C\n",temp,converted);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}