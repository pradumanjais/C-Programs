// Write a recursive function to find remainder when a positive integer a is divided by positive integer b.
#include <stdio.h>
int fremainder(int a, int b);
int main()
{
    int a, b;
    printf("Enter Dividend and Divisor\n");
    scanf("%d%d", &a, &b);
    printf("Remainder is %d\n", fremainder(a, b));
    return 0;
}

int fremainder(int a, int b)
{
    int x = a;
    static int count = 0;
    if (x >= b)
    {
        x = x - b;
        count++;
        return fremainder(x, b);
    }
    printf("Quotient is %d\n", count);
    return x;
}