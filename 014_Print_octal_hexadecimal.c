// WAP to accept a number in decimal and print the number in octal and hexadecimal.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("In octal %o\n", a);
    printf("In hexadecimal %x", a);
    return 0;
}