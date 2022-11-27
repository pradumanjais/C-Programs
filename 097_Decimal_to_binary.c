// Write a function that converts a decimal number to binary number.
#include <stdio.h>
int binary(int n);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Binary equivalent of %d is %d\n", num, binary(num));
    return 0;
}

int binary(int n)
{
    int a = 1, rem, bin = 0;
    while (n > 0)
    {
        rem = n % 2;
        bin = bin + rem * a;
        a = a * 10;
        n = n / 2;
    }
    return bin;
}