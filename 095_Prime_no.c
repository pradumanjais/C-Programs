// Write a function isprime() which takes a number and returns 1 if the number is prime and 0 otherwise.
#include <stdio.h>
#include <math.h>
int isprime(int);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (isprime(num))
        printf("Number is prime\n");
    else
        printf("Number is not prime\n");
    return 0;
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
