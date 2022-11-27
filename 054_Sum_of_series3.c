// WAP to find the sum of series upto n terms of the given series in which  value of x is entered x-x2+x3-x4....
#include <stdio.h>
#include <math.h>
int main()
{
    int x, n, series, sum = 0;
    printf("Enter the number of term and value of x\n");
    scanf("%d%d", &n, &x);
    printf("Series is:-\n");
    for (int i = 1; i <= n; i++)
    {
        series = pow(x, i);
        if (i % 2 == 0)
            sum -= series;
        else
            sum += series;
        printf("%d\t", series);
    }
    printf("\nSum of given series is %d", sum);
    return 0;
}