// WAP to find the quotient and remainder of a given number.
#include <stdio.h>
int main()
{
    int a, b, rem = 0, quot = 0;
    printf("Enter a number\n");
    scanf("%d%d", &a, &b);
    if (b != 0) // can also be written as "if(b)"
    {
        quot = a / b;
        rem = a % b;
        printf("Quotient = %d and Remainder = %d", quot, rem);
    }
    else
        printf("A number can not be divide by 0");
    return 0;
}