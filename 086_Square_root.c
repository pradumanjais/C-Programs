// WAP tp find the square root of a given number using library function sqrt().
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("Square root of given number is %.4f", sqrt(n));
    return 0;
}