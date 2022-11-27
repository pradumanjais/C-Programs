//WAP to print the sum of digits of any number using for loop.
#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    for (i = 0; num > 0; i++)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits is %d", sum);
    return 0;
}