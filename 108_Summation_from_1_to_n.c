// Program to find the summation from 1 to n numbers.
#include <stdio.h>
int summation(int n);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Sum : %d", summation(num));
    return 0;
}

int summation(int n)
{
    if (n == 0)
        return 0;
    return n + summation(n - 1);
}
