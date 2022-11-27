// WAP to multiply two numbers by Russian peasant method.
#include <stdio.h>
int main()
{
    int a, b, n1, n2, sum = 0;
    printf("Enter two numbers for Multiplication\n");
    scanf("%d%d", &n1, &n2);
    a = n1;
    b = n2;
    while (n1 > 0)
    {
        if (n1 % 2 != 0)
            sum += n2;
        n2 *= 2;
        n1 /= 2;
    }
    printf("%d * %d = %d\n", a, b, sum);
    return 0;
}