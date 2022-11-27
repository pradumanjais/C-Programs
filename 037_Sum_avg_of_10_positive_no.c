// WAP to find the sum and average of 10 positive numbers.
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter 10 positive numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Enter positive number only!");
            continue;
        }
        sum += n;
    }
    printf("Sum : %d and Avg : %.2f", sum, sum / 10.0);
    return 0;
}