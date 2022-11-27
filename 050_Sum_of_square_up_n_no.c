// WAP to accept a number n and print the sum of square of all number from 1 to n.
#include <stdio.h>
#include <math.h>
int main()
{
    int num, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum += pow(i, 2);
    }
    printf("Sum of square is %d\n", sum);
    return 0;
}