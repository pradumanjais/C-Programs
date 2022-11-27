// Write a function that inputs a binary or octal number and converts to decimal number.
#include <stdio.h>
#include <math.h>
int convert(int, int);
int main()
{
    int n, c;
    char ch;
    printf("Enter 'b' for binary and 'o' for octal\n");
    scanf("%c", &ch);
    c = ch == 'b' ? 2 : 8;
    printf("Enter your %c number\n", ch);
    scanf("%d", &n);
    printf("%c equivalent of given number is %d", ch, convert(c, n));
    return 0;
}

int convert(int c, int num)
{
    int i = 0, decimal = 0;
    while (num > 0)
    {
        decimal = decimal + (num % 10) * pow(c, i);
        num = num / 10;
        i++;
    }
    return decimal;
}