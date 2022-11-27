// WAP to perform arithmetic calculations on integers.
#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("Enter the operator\n");
    scanf("%c", &op);
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    switch (op)
    {
    case '+':
        printf("Addition of given numbers is %d", a + b);
        break;
    case '-':
        printf("Subtraction of given numbers is %d", a - b);
        break;
    case '*':
        printf("Multiplication of given numbers is %d", a * b);
        break;
    case '/':
        printf("Quotient of given numbers is %d", a / b);
        break;
    case '%':
        printf("Remainder of given numbers is %d", a % b);
        break;
    default:
        printf("Please enter valid operator\n");
    }
    return 0;
}