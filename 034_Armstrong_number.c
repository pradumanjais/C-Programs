// WAP to print armstrong numbers between 100 & 1000.
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, num, cube, sum;
    printf("Armstrong numbers between 100 and 1000\n");
    for (num = 100; num <= 1000; num++)
    {
        sum = 0;
        for (n = num; n > 0; n = n / 10)
        {
            cube = pow(n % 10, 3);
            sum += cube;
        }
        if (num == sum)
            printf("%d\t", num);
    }
    return 0;
}