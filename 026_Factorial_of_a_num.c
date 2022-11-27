// WAP to find factorial of any number.
#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num < 0)
        printf("No factorial could be found for negative number");
    else
    {
        while (num > 0)
        {
            fact *= num;
            num--;
        }
        printf("Factorial of given number is %d", fact);
    }
    return 0;
}