// WAP to print all the perfect numbers in a given range.
#include <stdio.h>
int sumPdivisors(int n);
int main()
{
    int x, y, per;
    printf("Enter the range\n");
    scanf("%d%d", &x, &y);
    for (int i = x; i <= y; i++)
    {
        per = sumPdivisors(i);
        if (per == i)
            printf("%d\t", per);
    }
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