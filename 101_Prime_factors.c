// WAP to find out the prime factors of a number.
#include <stdio.h>
#include <math.h>
void prime_factors(int n);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    prime_factors(num);
    return 0;
}

void prime_factors(int n)
{
    int i;
    for (i = 2; i != 1; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }
}