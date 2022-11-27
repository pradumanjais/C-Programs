// WAP that enters temperature in Celsius and converts that into Fahrenheit.
#include <stdio.h>
int main()
{
    float tc, tf;
    printf("Enter the temperature in Celsius\n");
    scanf("%f", &tc);
    tf = tc * (9.0 / 5) + 32; // formula and there is implicit type conversion in 9.0/5
    printf("Temperature in fahrenheit is %f", tf);
    return 0;
}