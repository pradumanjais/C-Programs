// WAP to find the sum of two numbers.
#include <stdio.h>
int summ(int a, int b); // function declaration
int main()
{
    int x, y, sum;
    printf("Enter two number for addition\n");
    scanf("%d%d", &x, &y);
    sum = summ(x, y); // function call
    printf("Sum : %d", sum);
    return 0;
}

int summ(int a, int b) // function defination
{
    return a + b;
}