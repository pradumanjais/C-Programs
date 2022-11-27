// WAP to check whether a number is divisibe by 11 or not.
#include <stdio.h>
int divisibleby11(long int n);
int main()
{
    long int num;
    int a;
    printf("Enter a number\n");
    scanf("%ld", &num);
    a = divisibleby11(num);
    if (a == 1)
        printf("YES it is divisible by 11\n");
    else
        printf("NO it is not divisible by 11\n");
    return 0;
}

int divisibleby11(long int n)
{
    int s1 = 0, s2 = 0, diff;
    if (n == 0)
        return 1;
    if (n < 10)
        return 0;
    while (n > 0)
    {
        s1 = s1 + n % 10;
        n = n / 10;
        s2 = s2 + n % 10;
        n = n / 10;
    }
    diff = s1 > s2 ? (s1 - s2) : (s2 - s1);
    return divisibleby11(diff);
}