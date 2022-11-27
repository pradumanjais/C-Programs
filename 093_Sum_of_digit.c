// WAP to find the sum of digits of any number.
#include <stdio.h>
int sum_of_digit(int n);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Sum of it's digit is %d", sum_of_digit(num));
    return 0;
}

int sum_of_digit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}