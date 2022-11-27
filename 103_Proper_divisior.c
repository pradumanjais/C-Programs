// Write a function sumPdivisors() that finds the sum of proper divisors of a number.
#include <stdio.h>
int sumPdivisors(int n);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Sum of proper divisors is %d", sumPdivisors(num));
    return 0;
}

int sumPdivisors(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum;
}