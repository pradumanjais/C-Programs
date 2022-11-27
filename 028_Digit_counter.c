// WAP to count the digits of a given number.
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    do // We won't get correct output if we use while loop here as it print 0 for input 0.
    {
        num /= 10;
        count++;
    } while (num > 0);
    printf("Number of digits in given num is %d", count);
    return 0;
}