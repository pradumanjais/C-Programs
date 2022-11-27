// Program to find the type and area of a triangle.
#include <stdio.h>
#include <math.h>
void type(float, float, float);
void area(float, float, float);
int main()
{
    float x, y, z;
    printf("Enter the side of triangle\n");
    scanf("%f%f%f", &x, &y, &z);
    type(x, y, z);
    area(x, y, z);
    return 0;
}

void type(float a, float b, float c)
{
    if (a == b && b == c)
        printf("Equilateral triangle\n");
    else if (a == b || b == c || c == a)
        printf("Isosceles triangle\n");
    else
        printf("Scalene triangle\n");
}

void area(float a, float b, float c)
{
    float s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area is %.3f\n", area);
}