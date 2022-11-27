// Program to illustrate the use of cast operator.
#include <stdio.h>
int main()
{
    int x = 5, y = 2;
    float p, q;
    p = x / y;
    printf("p = %.2f\n", p);
    q = (float)x / y; // Explixit type conversion
    printf("q = %.2f\n", q);
    return 0;
}