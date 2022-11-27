// Write a recursive function to count all the prime numbers between numbers a and b (both inclusive)
#include <stdio.h>
#include <math.h>
int prime_count(int a, int b);
int isprime(int a);
int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    printf("There are %d prime numbers between %d and %d", prime_count(a, b), a, b);
    return 0;
}

int prime_count(int a, int b)
{
    int count = 0;
    if (a > b)
        return 0;
    if (isprime(a))
        return 1 + prime_count(a + 1, b);
    return prime_count(a + 1, b);
}

int isprime(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}