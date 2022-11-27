// WAP to convert a binary number to a decimal number.
#include <stdio.h>
#include <math.h>
int main()
{
    int binnum, decnum = 0, rem, i = 0;
    printf("Enter a binary number\n");
    scanf("%d", &binnum);
    while (binnum > 0)
    {
        rem = binnum % 10;
        decnum += rem * pow(2, i);
        binnum = binnum / 10;
        i++;
    }
    printf("Decimal number : %d", decnum);
    return 0;
}