/* Write a function Product() that accepts two integers and returns their product. Don't use the * operator. 4
Similarly write two more functions Quotient() and Remainder().
*/
#include <stdio.h>
int Product(int a, int b);
int Quotient(int a, int b);
int Remainder(int a, int b);
int main()
{
    int x, y;
    printf("Enter two numbers\n");
    scanf("%d%d", &x, &y);
    printf("Product of %d and %d is %d \n", x, y, Product(x, y));
    printf("Quotient of %d and %d after division  is %d \n", x, y, Quotient(x, y));
    printf("Remainder of %d and %d after division  is %d \n", x, y, Remainder(x, y));
    return 0;
}

int Product(int a, int b)
{
    int prod = 0;
    for (int i = 1; i <= b; i++)
    {
        prod += a;
    }
    return prod;
}

int Quotient(int a, int b)
{
    int count = 0;
    while (a >= b)
    {
        a = a - b;
        count++;
    }
    return count;
}

int Remainder(int a, int b)
{
    while (a >= b)
    {
        a = a - b;
    }
    return a;
}