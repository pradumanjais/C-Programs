// Write a function convert() that can convert inches to cms and vice-versa.
#include <stdio.h>
void convert(float, char);
int main()
{
    char scale;
    float num;
    printf("Enter the scale in which you want to convert c or i\n");
    scanf("%c", &scale);
    printf("Enter the length\n");
    scanf("%f", &num);
    convert(num, scale);
    return 0;
}

void convert(float n, char s)
{
    if (s == 'c')
    {
        printf("%.2f inches =  %.2f cms", n, n * 2.54);
    }
    else if (s == 'i')
    {
        printf("%.2f cms = %.2f inches", n, n / 2.54);
    }
    else
    {
        printf("Invalid scale\n");
    }
}