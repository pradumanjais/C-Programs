// WAP to find the LCM and HCF of two numbers.
#include <stdio.h>
int main()
{
    int a, b, x, y;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    x = a;
    y = b;
    while (x != y)
    {
        if (x < y)
            x += a;
        else
            y += b;
    }
    printf("LCM of %d and %d is %d\n", a, b, x);
    x = a;
    y = b;
    while (x != y)
    {
        if (x > y)
            x -= y;
        else
            y -= x;
    }
    printf("HCF of %d and %d is %d", a, b, x);
    return 0;
}