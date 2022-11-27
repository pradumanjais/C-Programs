// WAP to find the Greatest Common Factor (HCF or GCF) of two integers.
#include <stdio.h>
int GCD(int, int);
int main()
{
    int x, y;
    printf("Enter two numbers\n");
    scanf("%d%d", &x, &y);
    printf("Greatest Common Factor of given numbers is %d", GCD(x, y));
    return 0;
}

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}