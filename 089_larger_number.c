// WAP to find the larger number.
#include <stdio.h>
int larger(int a, int b);
int main()
{
    int x, y;
    printf("Enter two numbers\n");
    scanf("%d%d", &x, &y);
    printf("Larger number is %d\n", larger(x, y));
    return 0;
}

int larger(int a, int b)
{
    return a > b ? a : b;
}