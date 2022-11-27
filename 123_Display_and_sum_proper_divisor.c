// Write a recursive function that displays all the proper divisors of a number and return their sum.
#include <stdio.h>
int sumPdivisors(int n, int x);
int main()
{
    int num, x = 1;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("\nSum of proper divisors is %d", sumPdivisors(num, x));
    return 0;
}

int sumPdivisors(int n, int x)
{
    if (x == n)
        return 0;
    if (n % x == 0)
    {
        printf("%d ", x);
        return x + sumPdivisors(n, x + 1);
    }
    return sumPdivisors(n, x + 1);
}
