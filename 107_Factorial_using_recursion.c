// Program to find the factorial of a number by recursive method.
#include <stdio.h>
long int fact(int n);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num < 0)
        printf("Factorial of -ve number is not possible\n");
    else
        printf("Factorial of given number is %ld", fact(num));
    return 0;
}

long int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}