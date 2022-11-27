/*WAP to accept any two numbers, if the first number is greater than second then print
the difference of these two numbers, otherwise print their sum using ternary operator
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter any two numbers\n");
    scanf("%d%d", &a, &b);
    (a > b) ? printf("Difference : %d", a - b) : printf("Sum : %d", a + b);
    return 0;
}