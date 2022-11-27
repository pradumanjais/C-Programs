// WAP to find the biggest number from the given three numbers.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("Biggest number is %d", a);
        else
            printf("Biggest number is %d", c);
    }
    else
    {
        if (b > c)
            printf("Biggest number is %d", b);
        else
            printf("Biggest number is %d", c);
    }
    return 0;
}
