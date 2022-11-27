// Program that finds the factorial of a given number.
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
        printf("Factorial of given number is %ld\n", fact(num));
    return 0;
}

long int fact(int n)
{
    long int fac = 1;
    if (n == 0)
        return 1;
    for (int i = n; i >= 1; i--)
        fac *= i;
    return fac;
}