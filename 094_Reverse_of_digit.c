// Write a function reverse() that inputs a number and returns the reverse of that number.
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
    int rev = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}
