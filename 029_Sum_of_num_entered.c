// WAP to find the sum of numbers entered.
#include <stdio.h>
int main()
{
    int num, sum = 0;
    do
    {
        printf("Enter a number ( 0 for stop)\n");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);
    printf("Sum is %d", sum);
    return 0;
}