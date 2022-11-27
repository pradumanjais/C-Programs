// WAP to find the reverse and sum of a four digit number.
#include <stdio.h>
int main()
{
    int n, rem, rev = 0, sum = 0;
    printf("Enter a four digit number\n");
    scanf("%d", &n);
    rem = n % 10;
    sum += rem;
    rev = rev + rem * 1000;
    n /= 10;

    rem = n % 10;
    sum += rem;
    rev = rev + rem * 100;
    n /= 10;

    rem = n % 10;
    sum += rem;
    rev = rev + rem * 10;
    n /= 10;

    rem = n % 10;
    sum += rem;
    rev = rev + rem;
    n /= 10;

    printf("Sum of its digit is %d and reverse of given number is %d", sum, rev);

    return 0;
}