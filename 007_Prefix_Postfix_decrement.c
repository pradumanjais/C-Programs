// WAP to implement prefix and postfix decrement.
#include <stdio.h>
int main()
{
    int a = 8;
    printf("a = %d\t", a);
    printf("a=%d\t", --a); // Prefix decrement
    printf("a=%d\t", a);
    printf("a=%d\t", a--); // Postfix decrement
    printf("a=%d\t", a);
    return 0;
}