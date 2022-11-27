// WAP to input a number and count the digits in it. Use while loop and the program should work correctly for 0 also.
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num == 0)
        count++;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    printf("Number of digits in given number is %d", count);
    return 0;
}