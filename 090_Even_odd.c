// Program that finds whether a number is even or odd.
#include <stdio.h>
void find(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    find(n);
    return 0;
}

void find(int n)
{
    if (n % 2 == 0)
        printf("%d is even", n);
    else
        printf("%d is odd", n);
}