// Program to display and find the sum of series.
#include <stdio.h>
int series(int n);
int main()
{
    int num;
    printf("Enter the number of terms\n");
    scanf("%d", &num);
    printf("\nSum of series upto %d terms is %d", num, series(num));
    return 0;
}

int series(int n)
{
    int sum = 0;
    if (n == 0)
        return 0;
    sum = n + series(n - 1);
    printf("%d + ", n);
    return sum;
}