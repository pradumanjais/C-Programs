// WAP that accepts the radius of a circle and calculates the area and perimeter of that circle.
#include <stdio.h>
#define PI 3.14
int main()
{
    float rad, area = 0, peri = 0;
    printf("Enter the radius of the circle\n");
    scanf("%f", &rad);
    area = PI * rad * rad; // calculating area
    peri = 2 * PI * rad;   // calculating perimeter i.e cirumference
    printf("Area of circle with radius %.2f is %.2f\n", rad, area);
    printf("Perimeter of circle with radius %.2f is %.2f\n", rad, peri);
    return 0;
}