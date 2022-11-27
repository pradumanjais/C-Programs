// WAP to print the sum of digits of any number
#include <stdio.h>
int main()
{
    int n, rem, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    printf("Sum of digits of given number is %d", sum);
    return 0;
}