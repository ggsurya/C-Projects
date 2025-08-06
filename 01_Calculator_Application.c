#include<stdio.h>
int main()
{
    double num1,num2;
    char op;
    printf("Enter the 1st number: ");
    scanf("%lf",&num1);
    printf("Enter the 2nd number: ");
    scanf("%lf",&num2);
    printf("Enter the operator(+,-,*,/): ");
    scanf("\n%c",&op);
    switch(op)
    {
        case '+':
            printf("Addition: %.2lf",num1+num2);
            break;
        case '-':
            printf("Subraction: %.2lf",num1-num2);
            break;
        case '*':
            printf("Multiplication: %.2lf",num1*num2);
            break;
        case '/':
            printf("Division: %.2lf",num1/num2);
            break;
        default:
            printf("Invalid Operator Entered");
    }
    return 0;
}
