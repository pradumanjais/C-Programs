// WAP to find whether a number is prime or not.
#include <stdio.h>
int main()
{
    int i, n, p = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            p = 1;
            break;
        }
    }
    if (p == 1)
        printf("%d is not prime", n);
    else
        printf("%d is prime", n);
    return 0;
}