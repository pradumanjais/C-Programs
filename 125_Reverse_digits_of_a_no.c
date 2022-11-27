// Write a recursive function that reverses an integer.
#include <stdio.h>
int reverse(int n);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Reverse of given number is %d", reverse(num));
    return 0;
}

int reverse(int n)
{
    static int rev = 0;
    if (n)
    {
        rev = rev * 10 + n % 10;
        reverse(n / 10);
    }
    else
        return rev;
}