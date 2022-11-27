// WAP to implement prefix and postfix increment.
#include <stdio.h>
int main()
{
    int a = 8;
    printf("a = %d\t", a);
    printf("a=%d\t", ++a); // Prefix increment
    printf("a=%d\t", a);
    printf("a=%d\t", a++); // Postfix increment
    printf("a=%d\t", a);
    return 0;
}