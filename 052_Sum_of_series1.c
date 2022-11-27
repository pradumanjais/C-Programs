// WAP to sum upto n terms of the series 1+11+111+1111+11111+......
#include <stdio.h>
#include <math.h>
int main()
{
    int i = 0, n, series = 0, sum = 0;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    while (i < n)
    {
        series = series + pow(10, i);
        printf("%d\t", series);
        sum += series;
        i++;
    }
    printf("\nSum of given series is %d\n", sum);
    return 0;
}