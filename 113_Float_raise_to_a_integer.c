// Program to raise a floating point number to a positive integer.
#include <stdio.h>
float power(float, int);
int main()
{
    float a;
    int n;
    printf("Enter a and n\n");
    scanf("%f%d", &a, &n);
    printf("%.2f raised to power %d is %.4f\n", a, n, power(a, n));
    return 0;
}

float power(float a, int n)
{
    if (n == 0)
        return 1;
    return a * power(a, n - 1);
}