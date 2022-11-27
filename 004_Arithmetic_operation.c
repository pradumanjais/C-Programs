// WAP to perform arithmetic operation on integers.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers :\n");
    scanf("%d%d", &a, &b);
    printf("Addition of given numbers is %d\n", a + b);
    printf("Subtraction of given numbers is %d\n", a - b);
    printf("Multiplication of given numbers is %d\n", a * b);
    printf("Quotient of given num after division is %d and remainder is %d\n", a / b, a % b);
}

/*WAP to perform arithmetic operation on floats.
#include<stdio.h>
int main()
{
    float a, b;
    printf("Enter two numbers :\n");
    scanf("%f%f",&a,&b);
    printf("Addition of given numbers is %.2f\n",a+b);
    printf("Subtraction of given numbers is %.2f\n",a-b);
    printf("Multiplication of given numbers is %.2f\n",a*b);
    printf("Quotient of given num after division is %.2f\n",a/b);
    // Modular operator is not allowed in case of floats
}
*/
