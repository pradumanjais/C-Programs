// Program to understand the use of comma operator.
#include <stdio.h>
int main()
{
    int a, b, c, sum;
    sum = (a = 8, b = 2, c = 5, a + b);
    printf("Sum =%d", sum);
    return 0;
}