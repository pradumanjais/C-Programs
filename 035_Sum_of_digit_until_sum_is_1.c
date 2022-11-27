// WAP to find the sum of digits of a number until the sum is reduced to 1 digit.
#include <stdio.h>
int main()
{
    int num, dig, sum;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("%d-> ", num);
    do
    {
        sum = 0;
        while (num != 0)
        {
            dig = num % 10;
            sum += dig;
            num /= 10;
        }
        printf("%d\t", sum);
        num = sum;
    } while (num / 10 != 0);
    return 0;
}