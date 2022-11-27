// Write a recursive function to input and add n numbers.
#include <stdio.h>
int add(int n);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Sum of given numbers is %d", add(num));
    return 0;
}

int add(int n)
{
    static int sum = 0;
    int a;
    if (n == 0)
        return sum;
    scanf("%d", &a);
    sum += a;
    return add(n - 1);
}