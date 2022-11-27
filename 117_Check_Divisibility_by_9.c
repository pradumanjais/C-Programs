// WAP to check whether a number is divisibe by 9 or not.
#include <stdio.h>
int divisibleby9(long int n);
int main()
{
    long int num;
    int a;
    printf("Enter a number\n");
    scanf("%ld", &num);
    a = divisibleby9(num);
    if (a == 1)
        printf("YES it is divisible by 9\n");
    else
        printf("NO it is not divisible by 9\n");
    return 0;
}

int divisibleby9(long int n)
{
    int sum;
    if (n == 9)
        return 1;
    if (n < 9)
        return 0;
    sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return divisibleby9(sum);
}