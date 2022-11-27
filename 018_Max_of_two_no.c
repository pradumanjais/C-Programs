// WAP to print the bigger number.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("%d is bigger number", a);
    else
        printf("%d is bigger number", b);
    return 0;
}