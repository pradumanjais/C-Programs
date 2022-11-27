// Program to interchange the value of two variables using comma operator.
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    printf("Numbers before swapping : a = %d and b = %d\n", a, b);
    temp = a, a = b, b = temp;
    printf("Numbers after swapping : a = %d and b = %d", a, b);
    return 0;
}