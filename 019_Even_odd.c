//WAP to print whether a number is even or odd.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("It's even");
    else
        printf("It's odd");
    return 0;
}