// WAP to multiply two positive numbers without using * operator.
#include <stdio.h>
int main()
{
    int i, a, b, mul = 0;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    for (i = 1; i <= b; i++)
        mul += a;
    printf("Multiplication : %d", mul);
    return 0;
}