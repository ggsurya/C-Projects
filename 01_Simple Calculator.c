#include<stdio.h>
int main()
{
    double num1,num2;
    char op;
    printf("====================================\n");
    printf("         Simple Calculator\n");
    printf("====================================\n");
    printf("Enter the 1st number     : ");
    scanf("%lf",&num1);
    printf("Enter the 2nd number     : ");
    scanf("%lf",&num2);
    printf("Enter the operator (+ - * /): ");
    scanf(" %c",&op);
    printf("\n------------- Result -------------\n");
    switch(op)
    {
        case '+':
            printf("Addition       : %.2lf + %.2lf = %.2lf\n",num1,num2,num1+num2);
            break;
        case '-':
            printf("Subtraction    : %.2lf - %.2lf = %.2lf\n",num1,num2,num1-num2);
            break;
        case '*':
            printf("Multiplication : %.2lf * %.2lf = %.2lf\n",num1,num2,num1*num2);
            break;
        case '/':
            if(num2==0)
                printf("Error          : Division by zero is not allowed.\n");
            else
                printf("Division       : %.2lf / %.2lf = %.2lf\n",num1,num2,num1/num2);
            break;
        default:
            printf("Error          : Invalid operator entered.\n");
    }
    printf("====================================\n");
    return 0;
}
