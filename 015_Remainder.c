// WAP to accept any number and print the value of remainder after dividing it by 3.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("Remainder after dividing %d by 3 is %d", a, a % 3);
    return 0;
}
