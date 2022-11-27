// Program to find the sum of digits of a number and display an integer as sequence of characters.
#include <stdio.h>
void display(int n);
int sumfdigit(int n);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sumfdigit(num));
    display(num);
    return 0;
}

int sumfdigit(int n)
{
    if (n / 10 == 0)
        return n;
    return n % 10 + sumfdigit(n / 10);
}

void display(int n)
{
    if (n / 10 == 0)
    {
        printf("%d\t", n);
        return;
    }
    display(n / 10);
    printf("%d\t", n % 10);
}