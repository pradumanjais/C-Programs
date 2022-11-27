// Write a function that inputs two numbers and print all prime numbers between those numbers.
#include <stdio.h>
#include <math.h>
int isprime(int);
void printprime(int, int);
int main()
{
    int num1, num2;
    printf("Enter two numbers\n");
    scanf("%d%d", &num1, &num2);
    printf("Prime numbers between %d and %d are:-\n", num1, num2);
    printprime(num1, num2);
    return 0;
}

void printprime(int x, int y)
{
    int i;
    for (i = x; i <= y; i++)
    {
        if (isprime(i))
            printf("%d\t", i);
    }
}

int isprime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}